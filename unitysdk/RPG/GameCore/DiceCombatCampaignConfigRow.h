#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196A41F0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196A4E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCampaignConfigRow_TypeDefinitionIndex = 10838;

	class DiceCombatCampaignConfigRow : public ::System::Object
	{
	public:
		::System::String* MainPageSilhouettePath; // 0x10
		::Il2CppArray<::System::UInt32>* DisplayProgress; // 0x18
		::System::String* IMGPath; // 0x20
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C*>* RuleGroupMapList; // 0x28
		::System::String* MainPageIMGPath; // 0x30
		::System::String* ProgressIMGPath; // 0x38
		::System::UInt32 GroupEntityID; // 0x40
		::RPG::Client::TextID ProgressTitle; // 0x48
		::RPG::Client::TextID ExitProgress; // 0x58
		::RPG::Client::TextID LoseBattle; // 0x68
		::RPG::Client::TextID Name; // 0x78
		::RPG::Client::TextID WinBattle; // 0x88
		::System::Boolean ExitMainPage; // 0x98
		::System::Boolean MustLose; // 0x99
		::System::UInt32 DiceCampaignID; // 0x9C
		::System::UInt32 SubMissonID; // 0xA0
		::System::UInt32 Progress; // 0xA4
		::RPG::Client::TextID EnterProgress; // 0xA8

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
