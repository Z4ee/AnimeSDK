#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_6_4E85B7C5FD9FA166_OFFSET UNITYSDK_OFFSET(0x1D02D190)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_6_E80FE800CEC3CB0A_OFFSET UNITYSDK_OFFSET(0x1D02D140)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02D180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddRogueModifierConfig_TypeDefinitionIndex = 18888;

	class RogueActAddRogueModifierConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E80FE800CEC3CB0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddRogueModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_6_E80FE800CEC3CB0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4E85B7C5FD9FA166(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddRogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_METHOD_6_4E85B7C5FD9FA166_OFFSET))(a1, a2);
		}
	};
}
