#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA1B8520)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA1B85F0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA1B8650)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA1B8600)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1B8510)
#define MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B4C20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer__Post_d__105_TypeDefinitionIndex = 43743;

	class MiHoYoSDKServer__Post_d__105 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::String* requestUrl; // 0x20
		::System::Action* timeoutCallback; // 0x28
		::System::Object* __2__current; // 0x30
		::System::String* bodyString; // 0x38
		::System::Single timeoutSecond; // 0x40
		::System::Int32 retryTime; // 0x44
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__POST_D__105__CTOR_OFFSET))(this, a1);
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
