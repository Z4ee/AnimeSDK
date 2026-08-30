#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D029D60)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02A980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCampaignConfigRow_TypeDefinitionIndex = 11263;

	class DiceCombatCampaignConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C*>* RuleGroupMapList; // 0x10
		::System::String* MainPageIMGPath; // 0x18
		::Il2CppArray<::System::UInt32>* DisplayProgress; // 0x20
		::System::String* ProgressIMGPath; // 0x28
		::System::String* IMGPath; // 0x30
		::System::String* MainPageSilhouettePath; // 0x38
		::RPG::Client::TextID EnterProgress; // 0x40
		::RPG::Client::TextID ProgressTitle; // 0x50
		::System::UInt32 DiceCampaignID; // 0x60
		::System::UInt32 Progress; // 0x64
		::RPG::Client::TextID LoseBattle; // 0x68
		::RPG::Client::TextID WinBattle; // 0x78
		::RPG::Client::TextID ExitProgress; // 0x88
		::RPG::Client::TextID Name; // 0x98
		::System::UInt32 GroupEntityID; // 0xA8
		::System::UInt32 SubMissonID; // 0xAC
		::System::Boolean MustLose; // 0xB0
		::System::Boolean ExitMainPage; // 0xB1

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
