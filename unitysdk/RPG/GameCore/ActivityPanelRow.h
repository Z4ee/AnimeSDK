#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D36E490)
#define RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36F160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 11203;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::System::String* UIPrefab; // 0x10
		::System::String* UnlockConditions; // 0x18
		::System::String* FinishConditions; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x28
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x30
		::System::String* TabIcon; // 0x38
		::RPG::Client::TextID PanelDesc; // 0x40
		::System::UInt32 IsSocialShow; // 0x50
		::System::UInt32 ActivityThemeID; // 0x54
		::RPG::Client::TextID TitleName; // 0x58
		::RPG::Client::TextID TabName; // 0x68
		::RPG::Client::TextID TagDesc; // 0x78
		::RPG::Client::TextID IntroDesc; // 0x88
		::System::UInt32 SortWeight; // 0x98
		::System::UInt32 PanelID; // 0x9C
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0xA0
		::System::Boolean IsSkipSwitchStoryLine; // 0xA4
		::System::Boolean DailyHint; // 0xA5
		::System::Boolean DisplayItemManualSort; // 0xA6
		::RPG::Client::TextID PanelBrief; // 0xA8

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
