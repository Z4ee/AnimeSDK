#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_PATROL_METHOD_4_0365E8762EB6E05B_OFFSET UNITYSDK_OFFSET(0x19C192D0)
#define RPG_GAMECORE_ST_MAIN_PATROL_METHOD_4_B5FE9918C03B7B73_OFFSET UNITYSDK_OFFSET(0x19C04E80)
#define RPG_GAMECORE_ST_MAIN_PATROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C04E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Patrol_TypeDefinitionIndex = 18977;

	class ST_Main_Patrol : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MoveStance; // 0x18
		::System::Boolean StanceUseVariable; // 0x1C
		::System::String* StanceVariableName; // 0x20
		::System::Single WaitTimeOnWayPoint; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PATROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0365E8762EB6E05B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Patrol*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Patrol*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PATROL_METHOD_4_0365E8762EB6E05B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B5FE9918C03B7B73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Patrol* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Patrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PATROL_METHOD_4_B5FE9918C03B7B73_OFFSET))(a1, a2);
		}
	};
}
