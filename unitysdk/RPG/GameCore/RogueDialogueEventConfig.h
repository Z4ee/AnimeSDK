#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDialogueEventOptionConfig; }

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_METHOD_2_1ADC76E210C050DB_OFFSET UNITYSDK_OFFSET(0x1CFA9970)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_METHOD_2_39387462A8FB7014_OFFSET UNITYSDK_OFFSET(0x1CFA9A40)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA9A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventConfig_TypeDefinitionIndex = 17193;

	class RogueDialogueEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueDialogueEventOptionConfig*>* OptionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1ADC76E210C050DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_METHOD_2_1ADC76E210C050DB_OFFSET))(a1, a2);
		}

		::RPG::GameCore::RogueDialogueEventOptionConfig* Method_2_39387462A8FB7014(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDialogueEventOptionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTCONFIG_METHOD_2_39387462A8FB7014_OFFSET))(this, a1);
		}
	};
}
