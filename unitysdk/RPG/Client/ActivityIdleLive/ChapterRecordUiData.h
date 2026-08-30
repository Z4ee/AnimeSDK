#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_82DE034E4ED86DE3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA_GETBATTLEPOWERRAW_OFFSET UNITYSDK_OFFSET(0x1471F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA_GETLEVELPROGRESS_OFFSET UNITYSDK_OFFSET(0x147190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA_GETMETCHARACTERCNT_OFFSET UNITYSDK_OFFSET(0x147140)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x147240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x147210)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ChapterRecordUiData_TypeDefinitionIndex = 75114;

	struct alignas(8) ChapterRecordUiData
	{
		::System::UInt64 BattlePower; // 0x10
		::System::UInt32 CaptainNum; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* TopThreeCaptainIcons; // 0x20
		::System::UInt32 _MetCharacterCount; // 0x28
		::System::Single _LevelProgress; // 0x2C
		::System::Collections::Generic::List_1<::System::String*>* TopThreeParticipatedAvatars; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Class_1_82DE034E4ED86DE3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_82DE034E4ED86DE3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 GetMetCharacterCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA_GETMETCHARACTERCNT_OFFSET))(this);
		}

		::System::String* GetLevelProgress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA_GETLEVELPROGRESS_OFFSET))(this);
		}

		/*
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetBattlePowerRaw()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERRECORDUIDATA_GETBATTLEPOWERRAW_OFFSET))(this);
		}
		*/
	};
}
