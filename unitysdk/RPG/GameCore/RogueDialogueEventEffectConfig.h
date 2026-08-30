#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTCONFIG_METHOD_2_48DB072B65CC9837_OFFSET UNITYSDK_OFFSET(0x1D3E1760)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E17A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventEffectConfig_TypeDefinitionIndex = 17705;

	class RogueDialogueEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_48DB072B65CC9837(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueEventEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueEventEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTCONFIG_METHOD_2_48DB072B65CC9837_OFFSET))(a1, a2);
		}
	};
}
