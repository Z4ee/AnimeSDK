#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCLICKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1467B5A0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCLICKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1467B630)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCLICKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1467AF60)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCLICKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1467B580)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetController_OnClickCallback_TypeDefinitionIndex = 80944;

	class UIGeneralToggleWidgetController_OnClickCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCLICKCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean isOn, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCLICKCALLBACK_INVOKE_OFFSET))(this, isOn, isInit);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isOn, ::System::Boolean isInit, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCLICKCALLBACK_BEGININVOKE_OFFSET))(this, isOn, isInit, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCLICKCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
