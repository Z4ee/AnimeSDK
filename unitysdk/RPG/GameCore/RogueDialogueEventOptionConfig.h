#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDialogueEventOptionDynamicConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONCONFIG_METHOD_2_A141BF27AD0680E7_OFFSET UNITYSDK_OFFSET(0x18D12D00)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D13040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventOptionConfig_TypeDefinitionIndex = 17012;

	class RogueDialogueEventOptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 OptionID; // 0x10
		::System::UInt32 DisplayID; // 0x14
		::System::UInt32 SpecialOptionID; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RogueDialogueEventOptionDynamicConfig*>* DynamicMap; // 0x20
		::System::Int32 DescValue; // 0x28
		::System::Int32 DescValue2; // 0x2C
		::System::Int32 DescValue3; // 0x30
		::System::Int32 DescValue4; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A141BF27AD0680E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueEventOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueEventOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTOPTIONCONFIG_METHOD_2_A141BF27AD0680E7_OFFSET))(a1, a2);
		}
	};
}
