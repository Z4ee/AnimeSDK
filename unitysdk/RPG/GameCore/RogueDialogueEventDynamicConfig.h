#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICCONFIG_METHOD_2_C3E8FC0FE17DEE27_OFFSET UNITYSDK_OFFSET(0x19B37940)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B37980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventDynamicConfig_TypeDefinitionIndex = 17030;

	class RogueDialogueEventDynamicConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C3E8FC0FE17DEE27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueEventDynamicConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueEventDynamicConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICCONFIG_METHOD_2_C3E8FC0FE17DEE27_OFFSET))(a1, a2);
		}
	};
}
