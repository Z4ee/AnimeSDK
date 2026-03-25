#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_5510E9FD4BE23955_OFFSET UNITYSDK_OFFSET(0x176F51C0)
#define RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_C92F6D6571EAE441_OFFSET UNITYSDK_OFFSET(0x176F50B0)
#define RPG_GAMECORE_SHOWBATTLECONDITIONUI__CTOR_OFFSET UNITYSDK_OFFSET(0x176F5190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleConditionUI_TypeDefinitionIndex = 21594;

	class ShowBattleConditionUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C92F6D6571EAE441(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleConditionUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleConditionUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_C92F6D6571EAE441_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5510E9FD4BE23955(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBattleConditionUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBattleConditionUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECONDITIONUI_METHOD_3_5510E9FD4BE23955_OFFSET))(a1, a2);
		}
	};
}
