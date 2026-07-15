#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C10D090)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10DCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCampaignConfigRow_TypeDefinitionIndex = 10888;

	class DiceCombatCampaignConfigRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C*>* RuleGroupMapList; // 0x18
		::System::String* MainPageSilhouettePath; // 0x20
		::Il2CppArray<::System::UInt32>* DisplayProgress; // 0x28
		::System::String* MainPageIMGPath; // 0x30
		::System::String* ProgressIMGPath; // 0x38
		::System::Boolean MustLose; // 0x40
		::System::Boolean ExitMainPage; // 0x41
		::System::UInt32 DiceCampaignID; // 0x44
		::RPG::Client::TextID EnterProgress; // 0x48
		::RPG::Client::TextID LoseBattle; // 0x58
		::System::UInt32 GroupEntityID; // 0x68
		::System::UInt32 SubMissonID; // 0x6C
		::RPG::Client::TextID ProgressTitle; // 0x70
		::System::UInt32 Progress; // 0x80
		::RPG::Client::TextID Name; // 0x88
		::RPG::Client::TextID WinBattle; // 0x98
		::RPG::Client::TextID ExitProgress; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatCampaignConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatCampaignConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
