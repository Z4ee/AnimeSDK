#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETBATTLERESULTASWIN_METHOD_3_0222CA7F6E2859D9_OFFSET UNITYSDK_OFFSET(0x176A9E70)
#define RPG_GAMECORE_SETBATTLERESULTASWIN_METHOD_3_743AE71B48F334E0_OFFSET UNITYSDK_OFFSET(0x176A9DF0)
#define RPG_GAMECORE_SETBATTLERESULTASWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x176A9E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleResultAsWin_TypeDefinitionIndex = 21694;

	class SetBattleResultAsWin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsAsWin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULTASWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_743AE71B48F334E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleResultAsWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleResultAsWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULTASWIN_METHOD_3_743AE71B48F334E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0222CA7F6E2859D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleResultAsWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleResultAsWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLERESULTASWIN_METHOD_3_0222CA7F6E2859D9_OFFSET))(a1, a2);
		}
	};
}
