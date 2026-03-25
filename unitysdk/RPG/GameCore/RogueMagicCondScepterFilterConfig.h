#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_7_37D42894C1861FD6_OFFSET UNITYSDK_OFFSET(0x176124D0)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_7_5167B40FA7FF0C2A_OFFSET UNITYSDK_OFFSET(0x17612310)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17612410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterFilterConfig_TypeDefinitionIndex = 17934;

	class RogueMagicCondScepterFilterConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_5167B40FA7FF0C2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_7_5167B40FA7FF0C2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_37D42894C1861FD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_7_37D42894C1861FD6_OFFSET))(a1, a2);
		}
	};
}
