#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_5510E9FD4BE23955_OFFSET UNITYSDK_OFFSET(0x1D5230E0)
#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_9F685CEB17134318_OFFSET UNITYSDK_OFFSET(0x1D523010)
#define RPG_GAMECORE_SHOWBATTLECONDITIONUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5230D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleConditionUI_TypeDefinitionIndex = 23099;

	class ShowBattleConditionUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F685CEB17134318(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleConditionUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleConditionUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_9F685CEB17134318_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5510E9FD4BE23955(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleConditionUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleConditionUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_5510E9FD4BE23955_OFFSET))(a1, a2);
		}
	};
}
