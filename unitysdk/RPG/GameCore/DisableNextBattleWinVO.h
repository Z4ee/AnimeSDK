#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO_METHOD_3_29F5003EFDABD023_OFFSET UNITYSDK_OFFSET(0x17172D10)
#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO_METHOD_3_85674E7C50B8ED37_OFFSET UNITYSDK_OFFSET(0x17172E20)
#define RPG_GAMECORE_DISABLENEXTBATTLEWINVO__CTOR_OFFSET UNITYSDK_OFFSET(0x17172DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableNextBattleWinVO_TypeDefinitionIndex = 18856;

	class DisableNextBattleWinVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29F5003EFDABD023(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableNextBattleWinVO*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableNextBattleWinVO*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO_METHOD_3_29F5003EFDABD023_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85674E7C50B8ED37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableNextBattleWinVO* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableNextBattleWinVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLENEXTBATTLEWINVO_METHOD_3_85674E7C50B8ED37_OFFSET))(a1, a2);
		}
	};
}
