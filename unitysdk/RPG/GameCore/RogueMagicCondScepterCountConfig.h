#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_7_469CC96963000F71_OFFSET UNITYSDK_OFFSET(0x18D1F460)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_7_E54CBA5478692447_OFFSET UNITYSDK_OFFSET(0x18D1F1B0)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1F330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterCountConfig_TypeDefinitionIndex = 18578;

	class RogueMagicCondScepterCountConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_E54CBA5478692447(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_7_E54CBA5478692447_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_469CC96963000F71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_7_469CC96963000F71_OFFSET))(a1, a2);
		}
	};
}
