#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUZZLEBOXMANINBOARD_METHOD_3_0B8A6DE63D662A3C_OFFSET UNITYSDK_OFFSET(0x18C7F030)
#define RPG_GAMECORE_PUZZLEBOXMANINBOARD_METHOD_3_6102990D591EB037_OFFSET UNITYSDK_OFFSET(0x18C7EFB0)
#define RPG_GAMECORE_PUZZLEBOXMANINBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7F000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleBoxmanInBoard_TypeDefinitionIndex = 20873;

	class PuzzleBoxmanInBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LoopCheck; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerEnter; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPlayerLeave; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEBOXMANINBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6102990D591EB037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PuzzleBoxmanInBoard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PuzzleBoxmanInBoard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEBOXMANINBOARD_METHOD_3_6102990D591EB037_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B8A6DE63D662A3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PuzzleBoxmanInBoard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PuzzleBoxmanInBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEBOXMANINBOARD_METHOD_3_0B8A6DE63D662A3C_OFFSET))(a1, a2);
		}
	};
}
