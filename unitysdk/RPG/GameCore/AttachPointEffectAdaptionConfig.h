#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ATTACHPOINTEFFECTADAPTIONCONFIG_METHOD_2_825D4E3F207634AD_OFFSET UNITYSDK_OFFSET(0x1A065940)
#define RPG_GAMECORE_ATTACHPOINTEFFECTADAPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A065A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachPointEffectAdaptionConfig_TypeDefinitionIndex = 15861;

	class AttachPointEffectAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::Single Scale; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPOINTEFFECTADAPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_825D4E3F207634AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachPointEffectAdaptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachPointEffectAdaptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHPOINTEFFECTADAPTIONCONFIG_METHOD_2_825D4E3F207634AD_OFFSET))(a1, a2);
		}
	};
}
