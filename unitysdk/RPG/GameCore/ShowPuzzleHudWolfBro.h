#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_METHOD_3_D645F4DE83D4B650_OFFSET UNITYSDK_OFFSET(0x18E65080)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_METHOD_3_DF69C2D5FCEE4409_OFFSET UNITYSDK_OFFSET(0x18E65100)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E650D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPuzzleHudWolfBro_TypeDefinitionIndex = 21178;

	class ShowPuzzleHudWolfBro : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D645F4DE83D4B650(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPuzzleHudWolfBro*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPuzzleHudWolfBro*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_METHOD_3_D645F4DE83D4B650_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF69C2D5FCEE4409(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPuzzleHudWolfBro* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPuzzleHudWolfBro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBRO_METHOD_3_DF69C2D5FCEE4409_OFFSET))(a1, a2);
		}
	};
}
