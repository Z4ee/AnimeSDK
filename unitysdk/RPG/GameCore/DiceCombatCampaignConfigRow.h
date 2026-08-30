#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D820A60)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D821670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCampaignConfigRow_TypeDefinitionIndex = 11263;

	class DiceCombatCampaignConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DisplayProgress; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C*>* RuleGroupMapList; // 0x18
		::System::String* IMGPath; // 0x20
		::System::String* MainPageIMGPath; // 0x28
		::System::String* ProgressIMGPath; // 0x30
		::System::String* MainPageSilhouettePath; // 0x38
		::RPG::Client::TextID LoseBattle; // 0x40
		::RPG::Client::TextID ProgressTitle; // 0x50
		::RPG::Client::TextID Name; // 0x60
		::System::UInt32 Progress; // 0x70
		::System::UInt32 SubMissonID; // 0x74
		::System::Boolean ExitMainPage; // 0x78
		::System::Boolean MustLose; // 0x79
		::System::UInt32 GroupEntityID; // 0x7C
		::RPG::Client::TextID WinBattle; // 0x80
		::System::UInt32 DiceCampaignID; // 0x90
		::RPG::Client::TextID EnterProgress; // 0x98
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
