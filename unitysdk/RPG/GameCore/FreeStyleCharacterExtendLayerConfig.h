#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG_METHOD_2_19ED7A84CF9A14BB_OFFSET UNITYSDK_OFFSET(0x18932190)
#define RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189322C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterExtendLayerConfig_TypeDefinitionIndex = 15433;

	class FreeStyleCharacterExtendLayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LayerIndex; // 0x10
		::System::String* LayerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_19ED7A84CF9A14BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTEREXTENDLAYERCONFIG_METHOD_2_19ED7A84CF9A14BB_OFFSET))(a1, a2);
		}
	};
}
