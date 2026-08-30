#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FREESTYLESTATETEMPLATECHARACTERCONFIG_METHOD_2_A0AD0E18049BAC8B_OFFSET UNITYSDK_OFFSET(0x1D11B260)
#define RPG_GAMECORE_FREESTYLESTATETEMPLATECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11B2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleStateTemplateCharacterConfig_TypeDefinitionIndex = 16142;

	class FreeStyleStateTemplateCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATECHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A0AD0E18049BAC8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleStateTemplateCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleStateTemplateCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATECHARACTERCONFIG_METHOD_2_A0AD0E18049BAC8B_OFFSET))(a1, a2);
		}
	};
}
