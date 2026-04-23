#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D704B32D505CBFB3;

#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xB332CA0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xB332C80)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_METHOD_5_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0xB332BD0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB332970)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB332920)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_REGISTER_OFFSET UNITYSDK_OFFSET(0xB332AC0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0xB332CC0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xB332C90)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xB332CD0)

namespace RPG::Client::TrainParty::Mapping
{
	inline static constexpr unsigned int SlotPosMapping_TypeDefinitionIndex = 68644;

	class SlotPosMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::UInt32 Field_5_2 = 0x0; // 0x0
		::System::UInt32 _SlotID_k__BackingField; // 0x18
		::UnityEngine::Vector3 _Offset_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_ONDESTROY_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_REGISTER_OFFSET))(this);
		}

		::System::Void Method_5_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_METHOD_5_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_SET_SLOTID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Offset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_SET_OFFSET_OFFSET))(this, value);
		}

		::Class_1_D704B32D505CBFB3* Method_5_AECF8BEC293ED42A()
		{
			return ((::Class_1_D704B32D505CBFB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTPOSMAPPING_METHOD_5_AECF8BEC293ED42A_OFFSET))(this);
		}
	};
}
