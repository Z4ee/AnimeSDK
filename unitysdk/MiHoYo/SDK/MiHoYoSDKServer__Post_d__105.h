#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8D5BD70)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8D5BE40)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8D5BEA0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8D5BE50)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D5BD60)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105__CTOR_OFFSET UNITYSDK_OFFSET(0x8D58310)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer__Post_d__105_TypeDefinitionIndex = 42940;

	class MiHoYoSDKServer__Post_d__105 : public ::System::Object
	{
	public:
		::System::String* requestUrl; // 0x10
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::System::String* bodyString; // 0x28
		::System::Action* timeoutCallback; // 0x30
		::System::Object* __2__current; // 0x38
		::System::Int32 retryTime; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Single timeoutSecond; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
