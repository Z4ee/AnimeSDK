#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RogueDialogueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNPCDialogueConfig; }

#define RPG_GAMECORE_ROGUENPCCONFIG_METHOD_2_71C0FA310DF1A962_OFFSET UNITYSDK_OFFSET(0x1E537740)
#define RPG_GAMECORE_ROGUENPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E537860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNPCConfig_TypeDefinitionIndex = 17790;

	class RogueNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RogueDialogueType DialogueType; // 0x10
		::Il2CppArray<::RPG::GameCore::RogueNPCDialogueConfig*>* DialogueList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_71C0FA310DF1A962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENPCCONFIG_METHOD_2_71C0FA310DF1A962_OFFSET))(a1, a2);
		}
	};
}
