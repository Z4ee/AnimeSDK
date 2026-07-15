#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_METHOD_3_9AFB0FFF1F33F66E_OFFSET UNITYSDK_OFFSET(0x1C6028E0)
#define RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_METHOD_3_F405D86277BDD325_OFFSET UNITYSDK_OFFSET(0x1C602920)
#define RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C602910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterNameBoardMaxBuffCount_TypeDefinitionIndex = 22618;

	class SetMonsterNameBoardMaxBuffCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MaxBuffCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AFB0FFF1F33F66E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_METHOD_3_9AFB0FFF1F33F66E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F405D86277BDD325(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERNAMEBOARDMAXBUFFCOUNT_METHOD_3_F405D86277BDD325_OFFSET))(a1, a2);
		}
	};
}
