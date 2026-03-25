#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETREDSTANCE_METHOD_3_19E21C8491ADCDCD_OFFSET UNITYSDK_OFFSET(0x1759F020)
#define RPG_GAMECORE_RESETREDSTANCE_METHOD_3_3A0351ED28D494BA_OFFSET UNITYSDK_OFFSET(0x1759F0B0)
#define RPG_GAMECORE_RESETREDSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1759F080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetRedStance_TypeDefinitionIndex = 20808;

	class ResetRedStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x20
		::System::Boolean SkipLockTeamStance; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETREDSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_19E21C8491ADCDCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetRedStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetRedStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETREDSTANCE_METHOD_3_19E21C8491ADCDCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A0351ED28D494BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetRedStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETREDSTANCE_METHOD_3_3A0351ED28D494BA_OFFSET))(a1, a2);
		}
	};
}
