#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeGroupData.h"

namespace RPG::GameCore { class ChallengeStoryGroupExtraConfigRow; }
namespace RPG::GameCore { class ChallengeStoryThemeConfigRow; }

#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_OPTIONALBUFFLIST_OFFSET UNITYSDK_OFFSET(0x92F66A0)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_STORYGROUPEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x92F6640)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_STORYTHEMECONFIGROW_OFFSET UNITYSDK_OFFSET(0x92F6660)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_THEMEID_OFFSET UNITYSDK_OFFSET(0x92F6680)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_STORYGROUPEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x92F6650)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_STORYTHEMECONFIGROW_OFFSET UNITYSDK_OFFSET(0x92F6670)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_THEMEID_OFFSET UNITYSDK_OFFSET(0x92F6690)
#define RPG_CLIENT_CHALLENGESTORYGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92F6580)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeStoryGroupData_TypeDefinitionIndex = 51239;

	class ChallengeStoryGroupData : public ::RPG::Client::ChallengeGroupData
	{
	public:
		::RPG::GameCore::ChallengeStoryThemeConfigRow* _StoryThemeConfigRow_k__BackingField; // 0x48
		::RPG::GameCore::ChallengeStoryGroupExtraConfigRow* _StoryGroupExtraInfoRow_k__BackingField; // 0x50
		::System::UInt32 _ThemeID_k__BackingField; // 0x58

		::System::Void _ctor(::System::UInt32 groupConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA__CTOR_OFFSET))(this, groupConfigID);
		}

		::RPG::GameCore::ChallengeStoryGroupExtraConfigRow* get_StoryGroupExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_STORYGROUPEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_StoryGroupExtraInfoRow(::RPG::GameCore::ChallengeStoryGroupExtraConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_STORYGROUPEXTRAINFOROW_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeStoryThemeConfigRow* get_StoryThemeConfigRow()
		{
			return ((::RPG::GameCore::ChallengeStoryThemeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_STORYTHEMECONFIGROW_OFFSET))(this);
		}

		::System::Void set_StoryThemeConfigRow(::RPG::GameCore::ChallengeStoryThemeConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeStoryThemeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_STORYTHEMECONFIGROW_OFFSET))(this, value);
		}

		::System::UInt32 get_ThemeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_THEMEID_OFFSET))(this);
		}

		::System::Void set_ThemeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_SET_THEMEID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_OptionalBuffList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESTORYGROUPDATA_GET_OPTIONALBUFFLIST_OFFSET))(this);
		}
	};
}
