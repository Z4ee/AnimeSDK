#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_7_37D42894C1861FD6_OFFSET UNITYSDK_OFFSET(0x1D939F50)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_7_EDF33371A793577A_OFFSET UNITYSDK_OFFSET(0x1D939F00)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D939F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterFilterConfig_TypeDefinitionIndex = 19347;

	class RogueMagicCondScepterFilterConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_EDF33371A793577A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_7_EDF33371A793577A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_37D42894C1861FD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_7_37D42894C1861FD6_OFFSET))(a1, a2);
		}
	};
}
