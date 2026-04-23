#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18604660)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18604F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityBannerCompanyMissionRow_TypeDefinitionIndex = 10497;

	class ActivityBannerCompanyMissionRow : public ::System::Object
	{
	public:
		::System::String* MainImagePath; // 0x10
		::System::String* SubImagePath; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockMissionList; // 0x20
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x28
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x30
		::RPG::Client::TextID Title; // 0x38
		::System::UInt32 BannerID; // 0x48
		::RPG::Client::TextID SubTitle; // 0x50
		::RPG::Client::TextID ShortDesc; // 0x60
		::System::UInt32 ActivityModuleID; // 0x70
		::System::UInt32 SortID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityBannerCompanyMissionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityBannerCompanyMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
