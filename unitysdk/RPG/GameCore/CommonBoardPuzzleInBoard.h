#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_METHOD_3_181EF509ACEAD108_OFFSET UNITYSDK_OFFSET(0x17121150)
#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_METHOD_3_9647A17B86F81CC3_OFFSET UNITYSDK_OFFSET(0x171210D0)
#define RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x17121120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonBoardPuzzleInBoard_TypeDefinitionIndex = 20192;

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

		static ::System::Void Method_3_9647A17B86F81CC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonBoardPuzzleInBoard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_METHOD_3_9647A17B86F81CC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_181EF509ACEAD108(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonBoardPuzzleInBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONBOARDPUZZLEINBOARD_METHOD_3_181EF509ACEAD108_OFFSET))(a1, a2);
		}
	};
}
