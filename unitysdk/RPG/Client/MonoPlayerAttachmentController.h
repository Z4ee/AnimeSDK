#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_585;

#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9EAB40)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_GET_ISDESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA9EACE0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_GET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xA9EACC0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_ONALLOC_OFFSET UNITYSDK_OFFSET(0xA9EA610)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xA9EA760)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_SET_ISDESTROYIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA9EACF0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_SET_ISRELEASED_OFFSET UNITYSDK_OFFSET(0xA9EACD0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xA9EA970)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EAD00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPlayerAttachmentController_TypeDefinitionIndex = 55471;

	class MonoPlayerAttachmentController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsReleased_k__BackingField; // 0x18
		::System::Boolean _IsDestroyImmediately_k__BackingField; // 0x19
		::Il2CppArray<::Class_0_16E4307DCC419505_585*>* Field_5_2; // 0x20

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

		::System::Void set_IsReleased(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_SET_ISRELEASED_OFFSET))(this, value);
		}

		::System::Boolean get_IsDestroyImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_GET_ISDESTROYIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_IsDestroyImmediately(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER_SET_ISDESTROYIMMEDIATELY_OFFSET))(this, value);
		}
	};
}
