#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F03C50)
#define RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F048E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 10482;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::System::String* UnlockConditions; // 0x10
		::System::String* TabIcon; // 0x18
		::System::String* UIPrefab; // 0x20
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x28
		::System::String* FinishConditions; // 0x30
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x38
		::RPG::Client::TextID TitleName; // 0x40
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0x50
		::RPG::Client::TextID TagDesc; // 0x58
		::RPG::Client::TextID PanelBrief; // 0x68
		::RPG::Client::TextID IntroDesc; // 0x78
		::System::UInt32 ActivityThemeID; // 0x88
		::System::UInt32 PanelID; // 0x8C
		::RPG::Client::TextID TabName; // 0x90
		::RPG::Client::TextID PanelDesc; // 0xA0
		::System::UInt32 SortWeight; // 0xB0
		::System::Boolean DisplayItemManualSort; // 0xB4
		::System::Boolean DailyHint; // 0xB5
		::System::Boolean IsSkipSwitchStoryLine; // 0xB6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityPanelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPanelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
