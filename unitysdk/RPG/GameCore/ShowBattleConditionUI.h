#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_5510E9FD4BE23955_OFFSET UNITYSDK_OFFSET(0x1BE3A070)
#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_9F685CEB17134318_OFFSET UNITYSDK_OFFSET(0x1BE39FA0)
#define RPG_GAMECORE_SHOWBATTLECONDITIONUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3A060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleConditionUI_TypeDefinitionIndex = 22527;

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
