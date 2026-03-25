#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONDYNAMICCONFIG_METHOD_2_34ACF28790BF5BD4_OFFSET UNITYSDK_OFFSET(0x17605DA0)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONDYNAMICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17605EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventOptionDynamicConfig_TypeDefinitionIndex = 16457;

	class RogueDialogueEventOptionDynamicConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::System::UInt32 DisplayID2; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONDYNAMICCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_34ACF28790BF5BD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueEventOptionDynamicConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueEventOptionDynamicConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONDYNAMICCONFIG_METHOD_2_34ACF28790BF5BD4_OFFSET))(a1, a2);
		}
	};
}
