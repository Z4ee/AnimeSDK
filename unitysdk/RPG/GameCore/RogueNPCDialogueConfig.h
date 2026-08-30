#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDialogueBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_METHOD_3_C05C3DAAE9C7D373_OFFSET UNITYSDK_OFFSET(0x1E5378B0)
#define RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_METHOD_3_EE7DE6ABDC122662_OFFSET UNITYSDK_OFFSET(0x1E537870)
#define RPG_GAMECORE_ROGUENPCDIALOGUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5378A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNPCDialogueConfig_TypeDefinitionIndex = 17789;

	class RogueNPCDialogueConfig : public ::RPG::GameCore::RogueDialogueBaseConfig
	{
	public:
		::System::UInt32 DialogueProgress; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::UInt32 TalkNameID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCDIALOGUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE7DE6ABDC122662(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNPCDialogueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNPCDialogueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_METHOD_3_EE7DE6ABDC122662_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C05C3DAAE9C7D373(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNPCDialogueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNPCDialogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCDIALOGUECONFIG_METHOD_3_C05C3DAAE9C7D373_OFFSET))(a1, a2);
		}
	};
}
