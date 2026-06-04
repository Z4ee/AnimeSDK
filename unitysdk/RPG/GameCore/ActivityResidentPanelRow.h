#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19402F20)
#define RPG_GAMECORE_ACTIVITYRESIDENTPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194033B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityResidentPanelRow_TypeDefinitionIndex = 10764;

	class ActivityResidentPanelRow : public ::System::Object
	{
	public:
		::System::String* IntroGuideImg; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* FinishConditions; // 0x18
		::System::String* EntranceImg; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x28
		::System::UInt32 IntroGuideVideoID; // 0x30
		::System::UInt32 SortWeight; // 0x34
		::System::Boolean DisplayItemManualSort; // 0x38
		::System::UInt32 PanelID; // 0x3C
		::RPG::Client::TextID IntroDesc; // 0x40
		::RPG::Client::TextID PanelDesc; // 0x50
		::RPG::GameCore::FixPoint ExpectTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRESIDENTPANELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityResidentPanelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityResidentPanelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
