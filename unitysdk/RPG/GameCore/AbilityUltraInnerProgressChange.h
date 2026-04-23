#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB555C70)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB555C20)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xB555CE0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GET_TARGETRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB555CC0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB555BC0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xB555CF0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_SET_TARGETRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB555CD0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB555D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityUltraInnerProgressChange_TypeDefinitionIndex = 52113;

	class AbilityUltraInnerProgressChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::FixPoint _FillAmount_k__BackingField; // 0x18
		::System::UInt32 _TargetRuntimeID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityUltraInnerProgressChange* Init(::System::UInt32 entityRuntimeId, ::RPG::GameCore::FixPoint fillAmount)
		{
			return ((::RPG::GameCore::AbilityUltraInnerProgressChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_INIT_OFFSET))(this, entityRuntimeId, fillAmount);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TargetRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GET_TARGETRUNTIMEID_OFFSET))(this);
		}

		::System::Void set_TargetRuntimeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_SET_TARGETRUNTIMEID_OFFSET))(this, value);
		}

		::RPG::GameCore::FixPoint get_FillAmount()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_FillAmount(::RPG::GameCore::FixPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_SET_FILLAMOUNT_OFFSET))(this, value);
		}
	};
}
