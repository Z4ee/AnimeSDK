#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_METHOD_3_3DFD163CC6FBB79F_OFFSET UNITYSDK_OFFSET(0x19619750)
#define RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_METHOD_3_83D04FBD2A952056_OFFSET UNITYSDK_OFFSET(0x196197A0)
#define RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x19619790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckTeamEntityNumberAxis_TypeDefinitionIndex = 14742;

	class CheckTeamEntityNumberAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::TeamType TargetType; // 0x10
		::System::Int32 TargetCharacterID; // 0x14
		::RPG::GameCore::CompareType EquationType; // 0x18
		::RPG::GameCore::FixPoint TargetNumber; // 0x20
		::RPG::GameCore::FixPoint CheckScore; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DFD163CC6FBB79F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckTeamEntityNumberAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckTeamEntityNumberAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_METHOD_3_3DFD163CC6FBB79F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83D04FBD2A952056(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckTeamEntityNumberAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckTeamEntityNumberAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTEAMENTITYNUMBERAXIS_METHOD_3_83D04FBD2A952056_OFFSET))(a1, a2);
		}
	};
}
