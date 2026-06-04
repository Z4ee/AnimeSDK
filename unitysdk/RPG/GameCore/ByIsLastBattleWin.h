#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISLASTBATTLEWIN_METHOD_4_94D7C9FBE1676C2D_OFFSET UNITYSDK_OFFSET(0x19569010)
#define RPG_GAMECORE_BYISLASTBATTLEWIN_METHOD_4_B8D77D4082AA6B3D_OFFSET UNITYSDK_OFFSET(0x19568F50)
#define RPG_GAMECORE_BYISLASTBATTLEWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19568FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsLastBattleWin_TypeDefinitionIndex = 19648;

	class ByIsLastBattleWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISLASTBATTLEWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B8D77D4082AA6B3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsLastBattleWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsLastBattleWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISLASTBATTLEWIN_METHOD_4_B8D77D4082AA6B3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_94D7C9FBE1676C2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsLastBattleWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsLastBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISLASTBATTLEWIN_METHOD_4_94D7C9FBE1676C2D_OFFSET))(a1, a2);
		}
	};
}
