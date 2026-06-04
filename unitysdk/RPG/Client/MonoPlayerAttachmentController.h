#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_608;

#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC138EB0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_GET_ISDESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xC1390C0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xC1390A0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_ONALLOC_OFFSET UNITYSDK_OFFSET(0xC1389A0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xC138AF0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_SET_ISDESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xC1390D0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xC1390B0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xC138CF0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC1390E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPlayerAttachmentController_TypeDefinitionIndex = 56222;

	class MonoPlayerAttachmentController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsReleased_k__BackingField; // 0x18
		::System::Boolean _IsDestroyImmediately_k__BackingField; // 0x19
		::Il2CppArray<::Class_0_16E4307DCC419505_608*>* Field_5_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_ONRELEASE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Boolean get_IsReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_GET_ISRELEASED_OFFSET))(this);
		}

		::System::Void set_IsReleased(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_SET_ISRELEASED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDestroyImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_GET_ISDESTROYIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_IsDestroyImmediately(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_SET_ISDESTROYIMMEDIATELY_OFFSET))(this, a1);
		}
	};
}
