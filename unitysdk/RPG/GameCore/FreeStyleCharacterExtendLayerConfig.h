#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG_METHOD_2_4E6E24A4293DC7C4_OFFSET UNITYSDK_OFFSET(0x1976D350)
#define RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1976D450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterExtendLayerConfig_TypeDefinitionIndex = 15496;

	class FreeStyleCharacterExtendLayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LayerIndex; // 0x10
		::System::String* LayerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4E6E24A4293DC7C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG_METHOD_2_4E6E24A4293DC7C4_OFFSET))(a1, a2);
		}
	};
}
