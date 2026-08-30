#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4AE970)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4AE920)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xE4AE9E0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GET_TARGETRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4AE9C0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4AE8C0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xE4AE9F0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_SET_TARGETRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4AE9D0)
#define RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4AEA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityUltraInnerProgressChange_TypeDefinitionIndex = 56743;

	class AbilityUltraInnerProgressChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _TargetRuntimeID_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _FillAmount_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityUltraInnerProgressChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::AbilityUltraInnerProgressChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_INIT_OFFSET))(this, a1, a2);
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

		::System::Void set_TargetRuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_SET_TARGETRUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_FillAmount()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_FillAmount(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYULTRAINNERPROGRESSCHANGE_SET_FILLAMOUNT_OFFSET))(this, a1);
		}
	};
}
