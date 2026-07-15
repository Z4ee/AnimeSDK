#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAFD610)
#define RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFE2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 10812;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::System::String* UIPrefab; // 0x10
		::System::String* UnlockConditions; // 0x18
		::System::String* FinishConditions; // 0x20
		::System::String* TabIcon; // 0x28
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x30
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x38
		::System::Boolean DisplayItemManualSort; // 0x40
		::System::Boolean DailyHint; // 0x41
		::System::Boolean IsSkipSwitchStoryLine; // 0x42
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0x44
		::RPG::Client::TextID IntroDesc; // 0x48
		::System::UInt32 ActivityThemeID; // 0x58
		::System::UInt32 SortWeight; // 0x5C
		::RPG::Client::TextID TabName; // 0x60
		::RPG::Client::TextID PanelBrief; // 0x70
		::RPG::Client::TextID TitleName; // 0x80
		::System::UInt32 IsSocialShow; // 0x90
		::System::UInt32 PanelID; // 0x94
		::RPG::Client::TextID PanelDesc; // 0x98
		::RPG::Client::TextID TagDesc; // 0xA8

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
