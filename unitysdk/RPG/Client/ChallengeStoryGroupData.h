#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeGroupData.h"

namespace RPG::GameCore { class ChallengeStoryGroupExtraConfigRow; }
namespace RPG::GameCore { class ChallengeStoryThemeConfigRow; }

#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_OPTIONALBUFFLIST_OFFSET UNITYSDK_OFFSET(0x191FA840)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_STORYGROUPEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x191FA7E0)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_STORYTHEMECONFIGROW_OFFSET UNITYSDK_OFFSET(0x191FA800)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_THEMEID_OFFSET UNITYSDK_OFFSET(0x191FA820)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_STORYGROUPEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x191FA7F0)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_STORYTHEMECONFIGROW_OFFSET UNITYSDK_OFFSET(0x191FA810)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_THEMEID_OFFSET UNITYSDK_OFFSET(0x191FA830)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191D7F10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryGroupData_TypeDefinitionIndex = 60364;

	class ChallengeStoryGroupData : public ::RPG::Client::ChallengeGroupData
	{
	public:
		::RPG::GameCore::ChallengeStoryGroupExtraConfigRow* _StoryGroupExtraInfoRow_k__BackingField; // 0x58
		::RPG::GameCore::ChallengeStoryThemeConfigRow* _StoryThemeConfigRow_k__BackingField; // 0x60
		::System::UInt32 _ThemeID_k__BackingField; // 0x68

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeStoryGroupExtraConfigRow* get_StoryGroupExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_STORYGROUPEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_StoryGroupExtraInfoRow(::RPG::GameCore::ChallengeStoryGroupExtraConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_STORYGROUPEXTRAINFOROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeStoryThemeConfigRow* get_StoryThemeConfigRow()
		{
			return ((::RPG::GameCore::ChallengeStoryThemeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_STORYTHEMECONFIGROW_OFFSET))(this);
		}

		::System::Void set_StoryThemeConfigRow(::RPG::GameCore::ChallengeStoryThemeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeStoryThemeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_STORYTHEMECONFIGROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_ThemeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_THEMEID_OFFSET))(this);
		}

		::System::Void set_ThemeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_THEMEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_OptionalBuffList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_OPTIONALBUFFLIST_OFFSET))(this);
		}
	};
}
