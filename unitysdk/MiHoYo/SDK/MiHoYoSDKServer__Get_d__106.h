#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB2496C0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB24AD80)
#define MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB24ADE0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB24AD90)
#define MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2496B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106__CTOR_OFFSET UNITYSDK_OFFSET(0xB247010)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer__Get_d__106_TypeDefinitionIndex = 46790;

	class MiHoYoSDKServer__Get_d__106 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MiHoYo::SDK::JSONObject* query; // 0x18
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x20
		::System::Action_1<::System::String*>* callback; // 0x28
		::System::String* requestUrl; // 0x30
		::System::Action* timeoutCallback; // 0x38
		::System::Int32 retryTime; // 0x40
		::System::Single timeoutSecond; // 0x44
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER__GET_D__106_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
