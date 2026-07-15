#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO_METHOD_3_81CD0BBB8E33A8DA_OFFSET UNITYSDK_OFFSET(0x1BB18B90)
#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO_METHOD_3_85674E7C50B8ED37_OFFSET UNITYSDK_OFFSET(0x1BB18C60)
#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB18C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableNextBattleWinVO_TypeDefinitionIndex = 19766;

	class DisableNextBattleWinVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81CD0BBB8E33A8DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableNextBattleWinVO*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableNextBattleWinVO*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO_METHOD_3_81CD0BBB8E33A8DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85674E7C50B8ED37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableNextBattleWinVO* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableNextBattleWinVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO_METHOD_3_85674E7C50B8ED37_OFFSET))(a1, a2);
		}
	};
}
