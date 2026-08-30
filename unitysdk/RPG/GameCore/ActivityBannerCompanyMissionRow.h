#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9EF7D0)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F0100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityBannerCompanyMissionRow_TypeDefinitionIndex = 10962;

	class ActivityBannerCompanyMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockMissionList; // 0x18
		::System::String* MainImagePath; // 0x20
		::System::String* SubImagePath; // 0x28
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x30
		::RPG::Client::TextID Title; // 0x38
		::RPG::Client::TextID SubTitle; // 0x48
		::RPG::Client::TextID ShortDesc; // 0x58
		::System::UInt32 BannerID; // 0x68
		::System::UInt32 SortID; // 0x6C
		::System::UInt32 ActivityModuleID; // 0x70

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
