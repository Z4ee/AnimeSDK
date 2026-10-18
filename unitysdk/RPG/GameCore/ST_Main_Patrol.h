#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_PATROL_METHOD_4_1D3A79A15A5D19A7_OFFSET UNITYSDK_OFFSET(0x1DA52E10)
#define RPG_GAMECORE_ST_MAIN_PATROL_METHOD_4_FC882F0443A6CAD1_OFFSET UNITYSDK_OFFSET(0x1DA52DC0)
#define RPG_GAMECORE_ST_MAIN_PATROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA52E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Patrol_TypeDefinitionIndex = 20103;

	class ST_Main_Patrol : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x18
		::System::Boolean StanceUseVariable; // 0x1C
		::System::String* StanceVariableName; // 0x20
		::System::Boolean SkipStartTurn; // 0x28
		::System::Single WaitTimeOnWayPoint; // 0x2C
		::System::Single WaitTimeRandomRange; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PATROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FC882F0443A6CAD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Patrol*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Patrol*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PATROL_METHOD_4_FC882F0443A6CAD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D3A79A15A5D19A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Patrol* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Patrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PATROL_METHOD_4_1D3A79A15A5D19A7_OFFSET))(a1, a2);
		}
	};
}
