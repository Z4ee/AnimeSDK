#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_METHOD_6_4EA1CA73F50DB894_OFFSET UNITYSDK_OFFSET(0x1D3B7FE0)
#define RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_METHOD_6_95B66F299474A498_OFFSET UNITYSDK_OFFSET(0x1D3B7F90)
#define RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddAttributeMaxCountConfig_TypeDefinitionIndex = 19550;

	class RogueActPersonaAddAttributeMaxCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_95B66F299474A498(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddAttributeMaxCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddAttributeMaxCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_METHOD_6_95B66F299474A498_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4EA1CA73F50DB894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddAttributeMaxCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddAttributeMaxCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDATTRIBUTEMAXCOUNTCONFIG_METHOD_6_4EA1CA73F50DB894_OFFSET))(a1, a2);
		}
	};
}
