#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYLOCALLEGENDGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193F0640)
#define RPG_GAMECORE_ACTIVITYLOCALLEGENDGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193F0AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLocalLegendGroupConfigRow_TypeDefinitionIndex = 11330;

	class ActivityLocalLegendGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* GroupPicPath; // 0x10
		::RPG::Client::TextID TeamBuildTip; // 0x18
		::RPG::Client::TextID ChallengeStrategy; // 0x28
		::RPG::Client::TextID GroupTitle; // 0x38
		::RPG::Client::TextID StageMechanismTitle; // 0x48
		::System::UInt32 TutorialGuideID; // 0x58
		::System::UInt32 GroupID; // 0x5C
		::RPG::Client::TextID StageMechanism; // 0x60
		::System::UInt32 ActivityModuleID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
