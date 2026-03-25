#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYLOCALLEGENDGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFF610)
#define RPG_GAMECORE_ACTIVITYLOCALLEGENDGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFFA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLocalLegendGroupConfigRow_TypeDefinitionIndex = 10879;

	class ActivityLocalLegendGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* GroupPicPath; // 0x10
		::RPG::Client::TextID StageMechanismTitle; // 0x18
		::RPG::Client::TextID GroupTitle; // 0x28
		::RPG::Client::TextID TeamBuildTip; // 0x38
		::RPG::Client::TextID StageMechanism; // 0x48
		::System::UInt32 GroupID; // 0x58
		::RPG::Client::TextID ChallengeStrategy; // 0x60
		::System::UInt32 TutorialGuideID; // 0x70
		::System::UInt32 ActivityModuleID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityLocalLegendGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
