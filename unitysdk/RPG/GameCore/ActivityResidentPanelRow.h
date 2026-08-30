#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D696130)
#define RPG_GAMECORE_ACTIVITYRESIDENTPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6965C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityResidentPanelRow_TypeDefinitionIndex = 11189;

	class ActivityResidentPanelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::System::String* EntranceImg; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* FinishConditions; // 0x20
		::System::String* IntroGuideImg; // 0x28
		::RPG::Client::TextID IntroDesc; // 0x30
		::RPG::GameCore::FixPoint ExpectTime; // 0x40
		::System::UInt32 PanelID; // 0x48
		::System::UInt32 SortWeight; // 0x4C
		::RPG::Client::TextID PanelDesc; // 0x50
		::System::Boolean DisplayItemManualSort; // 0x60
		::System::UInt32 IntroGuideVideoID; // 0x64

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
