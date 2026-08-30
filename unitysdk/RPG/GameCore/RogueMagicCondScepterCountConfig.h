#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_7_469CC96963000F71_OFFSET UNITYSDK_OFFSET(0x1D3ECFC0)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_7_E83A120C1725028D_OFFSET UNITYSDK_OFFSET(0x1D3ECF70)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ECFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterCountConfig_TypeDefinitionIndex = 19346;

	class RogueMagicCondScepterCountConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_E83A120C1725028D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_7_E83A120C1725028D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_469CC96963000F71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_7_469CC96963000F71_OFFSET))(a1, a2);
		}
	};
}
