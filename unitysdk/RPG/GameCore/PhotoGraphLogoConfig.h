#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHLOGOCONFIG_METHOD_2_A99C6B106D0A0DFC_OFFSET UNITYSDK_OFFSET(0x1B4C2460)
#define RPG_GAMECORE_PHOTOGRAPHLOGOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C2570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphLogoConfig_TypeDefinitionIndex = 18311;

	class PhotoGraphLogoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LanguageName; // 0x10
		::System::String* LogoIconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHLOGOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A99C6B106D0A0DFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphLogoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphLogoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHLOGOCONFIG_METHOD_2_A99C6B106D0A0DFC_OFFSET))(a1, a2);
		}
	};
}
