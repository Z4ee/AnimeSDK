#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_PositionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_METHOD_4_0098D684E1AC323A_OFFSET UNITYSDK_OFFSET(0x18DF2AD0)
#define RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_METHOD_4_476A666D0C9161AD_OFFSET UNITYSDK_OFFSET(0x18DF29B0)
#define RPG_GAMECORE_ST_MAIN_MOVETOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF2A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_MoveToPosition_TypeDefinitionIndex = 19027;

	class ST_Main_MoveToPosition : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_PositionType PositionType; // 0x18
		::System::UInt32 PointID; // 0x1C
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x20
		::System::Boolean StanceUseVariable; // 0x24
		::System::String* StanceVariableName; // 0x28
		::System::Boolean SkipStartTurn; // 0x30
		::System::Boolean FinishAfterStop; // 0x31
		::System::Single SpeedScale; // 0x34
		::System::Single TargetSampleRadius; // 0x38
		::System::Boolean AccurateStop; // 0x3C
		::System::Boolean AlignRotation; // 0x3D
		::System::Boolean SetReachConfig; // 0x3E
		::System::Single ReachRadius; // 0x40
		::System::Single ReachAngle; // 0x44
		::System::Boolean SetBlockConfig; // 0x48
		::System::Single BlockSampleInterval; // 0x4C
		::System::Int32 BlockSampleCount; // 0x50
		::System::Single BlockDetectDistance; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_476A666D0C9161AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_MoveToPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_MoveToPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_METHOD_4_476A666D0C9161AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0098D684E1AC323A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_MoveToPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_MoveToPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_MOVETOPOSITION_METHOD_4_0098D684E1AC323A_OFFSET))(a1, a2);
		}
	};
}
