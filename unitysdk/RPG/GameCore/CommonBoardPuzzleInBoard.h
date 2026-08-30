#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_METHOD_3_21EC095568230EF2_OFFSET UNITYSDK_OFFSET(0x1CFF0250)
#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_METHOD_3_C49B401B7253E4B3_OFFSET UNITYSDK_OFFSET(0x1CFF0200)
#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF0240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonBoardPuzzleInBoard_TypeDefinitionIndex = 21768;

	class CommonBoardPuzzleInBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LoopCheck; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnter; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerLeave; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C49B401B7253E4B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonBoardPuzzleInBoard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_METHOD_3_C49B401B7253E4B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21EC095568230EF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonBoardPuzzleInBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_METHOD_3_21EC095568230EF2_OFFSET))(a1, a2);
		}
	};
}
