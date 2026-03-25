#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEPEAKGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1705DE60)
#define RPG_GAMECORE_CHALLENGEPEAKGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1705E310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakGroupConfigRow_TypeDefinitionIndex = 11829;

	class ChallengePeakGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PreLevelIDList; // 0x10
		::System::String* HandBookPanelBannerPath; // 0x18
		::System::String* BossUI3DAnimatorPath; // 0x20
		::System::String* BossUI3DPrefabPath; // 0x28
		::System::String* ThemeIconPicPath; // 0x30
		::System::String* ThemePosterTabPicPath; // 0x38
		::Il2CppArray<::System::String*>* RankIconPathList; // 0x40
		::System::UInt32 RecommendID; // 0x48
		::System::UInt32 ActivityModule; // 0x4C
		::RPG::Client::TextID Title; // 0x50
		::System::UInt32 ID; // 0x60
		::System::UInt32 RewardGroupID; // 0x64
		::System::UInt32 HintGoodsID; // 0x68
		::System::UInt32 BossLevelID; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengePeakGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengePeakGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
