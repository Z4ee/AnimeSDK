#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13DD1F70)
#define MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13DD1FE0)
#define MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13DD1C70)
#define MOLEMOLE_UIMAINCITYPAGECONTROLLER_PHYSICSJOBDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD1C60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPageController_PhysicsJobDelegate_TypeDefinitionIndex = 71260;

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
