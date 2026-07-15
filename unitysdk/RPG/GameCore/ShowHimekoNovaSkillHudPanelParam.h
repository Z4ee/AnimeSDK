#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_SHOWHIMEKONOVASKILLHUDPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x127DBE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHimekoNovaSkillHudPanelParam_TypeDefinitionIndex = 56038;

	class ShowHimekoNovaSkillHudPanelParam : public ::System::Object
	{
	public:
		::System::Boolean IsResetFireCD; // 0x10
		::System::Single Duration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHIMEKONOVASKILLHUDPANELPARAM__CTOR_OFFSET))(this);
		}
	};
}
