#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_METHOD_3_DE0792828702A764_OFFSET UNITYSDK_OFFSET(0x1C5C0CE0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_METHOD_3_FABD99BA6A85B174_OFFSET UNITYSDK_OFFSET(0x1C5C0DE0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C0D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleSwitchBoard_TypeDefinitionIndex = 19595;

	class GravityBallPuzzleSwitchBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PuzzleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE0792828702A764(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleSwitchBoard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_METHOD_3_DE0792828702A764_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FABD99BA6A85B174(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallPuzzleSwitchBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_METHOD_3_FABD99BA6A85B174_OFFSET))(a1, a2);
		}
	};
}
