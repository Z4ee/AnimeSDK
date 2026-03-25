#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9EA0820)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA1440)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EA14A0)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9EA1450)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EA07B0)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9E6F0)
#define RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9EA0800)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil__RepeatSendDeviceInfo_d__44_TypeDefinitionIndex = 47964;

	class OpeUtil__RepeatSendDeviceInfo_d__44 : public ::System::Object
	{
	public:
		::System::String* _reqUrl_5__3; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* _postData_5__2; // 0x20
		::System::String* cliID; // 0x28
		::System::String* authKey; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _Post_5__5; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Boolean _result_5__4; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__REPEATSENDDEVICEINFO_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
