#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_METHOD_3_7095419498AB5E9C_OFFSET UNITYSDK_OFFSET(0x1899CCC0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_METHOD_3_973ED38076A23050_OFFSET UNITYSDK_OFFSET(0x1899CBB0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1899CC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleSwitchBoardWaitFinish_TypeDefinitionIndex = 19329;

	class GravityBallPuzzleSwitchBoardWaitFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_973ED38076A23050(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_METHOD_3_973ED38076A23050_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7095419498AB5E9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_METHOD_3_7095419498AB5E9C_OFFSET))(a1, a2);
		}
	};
}
