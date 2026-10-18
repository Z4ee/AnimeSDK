#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D34E000)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34E8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityBannerCompanyMissionRow_TypeDefinitionIndex = 10978;

	class ActivityBannerCompanyMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockMissionList; // 0x10
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x18
		::System::String* SubImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x28
		::System::String* MainImagePath; // 0x30
		::System::UInt32 BannerID; // 0x38
		::System::UInt32 SortID; // 0x3C
		::RPG::Client::TextID SubTitle; // 0x40
		::RPG::Client::TextID ShortDesc; // 0x50
		::System::UInt32 ActivityModuleID; // 0x60
		::RPG::Client::TextID Title; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityBannerCompanyMissionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityBannerCompanyMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
