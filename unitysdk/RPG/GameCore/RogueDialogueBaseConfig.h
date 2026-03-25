#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_METHOD_2_A14CFAF226F8759E_OFFSET UNITYSDK_OFFSET(0x17605550)
#define RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_METHOD_2_D4B5295697587545_OFFSET UNITYSDK_OFFSET(0x176053F0)
#define RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17605540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueBaseConfig_TypeDefinitionIndex = 16542;

	class RogueDialogueBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DialoguePath; // 0x10
		::System::String* OptionPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D4B5295697587545(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_METHOD_2_D4B5295697587545_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A14CFAF226F8759E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEBASECONFIG_METHOD_2_A14CFAF226F8759E_OFFSET))(a1, a2);
		}
	};
}
