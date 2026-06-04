#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193F4B10)
#define RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193F57F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 10762;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x18
		::System::String* UIPrefab; // 0x20
		::System::String* FinishConditions; // 0x28
		::System::String* UnlockConditions; // 0x30
		::System::String* TabIcon; // 0x38
		::RPG::Client::TextID TagDesc; // 0x40
		::RPG::Client::TextID IntroDesc; // 0x50
		::System::Boolean IsSkipSwitchStoryLine; // 0x60
		::System::Boolean DailyHint; // 0x61
		::System::Boolean DisplayItemManualSort; // 0x62
		::System::UInt32 SortWeight; // 0x64
		::RPG::Client::TextID PanelDesc; // 0x68
		::RPG::Client::TextID TabName; // 0x78
		::System::UInt32 PanelID; // 0x88
		::System::UInt32 ActivityThemeID; // 0x8C
		::RPG::Client::TextID PanelBrief; // 0x90
		::RPG::Client::TextID TitleName; // 0xA0
		::System::UInt32 IsSocialShow; // 0xB0
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityPanelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPanelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
