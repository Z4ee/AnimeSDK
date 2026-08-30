#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUECONDITIONEFFECTCONFIG_METHOD_2_42BFDC2BC7EE1A66_OFFSET UNITYSDK_OFFSET(0x1D92E280)
#define RPG_GAMECORE_ROGUEDIALOGUECONDITIONEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D92E2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueConditionEffectConfig_TypeDefinitionIndex = 19402;

	class RogueDialogueConditionEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUECONDITIONEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_42BFDC2BC7EE1A66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueConditionEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueConditionEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUECONDITIONEFFECTCONFIG_METHOD_2_42BFDC2BC7EE1A66_OFFSET))(a1, a2);
		}
	};
}
