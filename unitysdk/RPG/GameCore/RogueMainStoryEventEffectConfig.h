#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAINSTORYEVENTEFFECTCONFIG_METHOD_2_4C79CB63886C4E0B_OFFSET UNITYSDK_OFFSET(0x1D3F2140)
#define RPG_GAMECORE_ROGUEMAINSTORYEVENTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMainStoryEventEffectConfig_TypeDefinitionIndex = 17794;

	class RogueMainStoryEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAINSTORYEVENTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4C79CB63886C4E0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMainStoryEventEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMainStoryEventEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAINSTORYEVENTEFFECTCONFIG_METHOD_2_4C79CB63886C4E0B_OFFSET))(a1, a2);
		}
	};
}
