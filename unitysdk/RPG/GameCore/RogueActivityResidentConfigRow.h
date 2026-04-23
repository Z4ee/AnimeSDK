#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CE5D50)
#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActivityResidentConfigRow_TypeDefinitionIndex = 13903;

	class RogueActivityResidentConfigRow : public ::System::Object
	{
	public:
		::System::String* TitleIconPath; // 0x10
		::System::String* IntroGuideImg; // 0x18
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x28
		::RPG::Client::TextID ResidentBrief; // 0x30
		::RPG::Client::TextID ResidentDesc; // 0x40
		::System::Boolean IsShowRemainTime; // 0x50
		::System::UInt32 RelatedActivityPanelID; // 0x54
		::RPG::Client::TextID ResidentName; // 0x58
		::System::UInt32 UnlockID; // 0x68
		::System::UInt32 ActivityID; // 0x6C
		::System::UInt32 ActivityModuleID; // 0x70
		::RPG::GameCore::RogueSubMode SubMode; // 0x74
		::System::UInt32 IntroID; // 0x78
		::System::UInt32 SortWeight; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueActivityResidentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActivityResidentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
