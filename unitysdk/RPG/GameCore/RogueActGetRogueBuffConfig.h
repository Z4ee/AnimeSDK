#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_6_E3963BE7245B367B_OFFSET UNITYSDK_OFFSET(0x1D3B7990)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_6_FCD3053D93366AFF_OFFSET UNITYSDK_OFFSET(0x1D3B79E0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B79D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffConfig_TypeDefinitionIndex = 19357;

	class RogueActGetRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E3963BE7245B367B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_6_E3963BE7245B367B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FCD3053D93366AFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_6_FCD3053D93366AFF_OFFSET))(a1, a2);
		}
	};
}
