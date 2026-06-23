#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x155DC5B0)
#define MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x155DC620)
#define MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x155DC2C0)
#define MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x155DC2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPageController_PhysicsJobDelegate_TypeDefinitionIndex = 44837;

	class UIMainCityPageController_PhysicsJobDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_INVOKE_OFFSET))(this, index);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 index, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_BEGININVOKE_OFFSET))(this, index, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
