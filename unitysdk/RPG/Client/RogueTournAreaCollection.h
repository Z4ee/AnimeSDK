#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_94;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournAreaDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB09F610)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETAREA_OFFSET UNITYSDK_OFFSET(0xB09FBD0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALAREABYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB0A0B70)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALAREAS_OFFSET UNITYSDK_OFFSET(0xB0A0230)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALDIVISIONAREAS_OFFSET UNITYSDK_OFFSET(0xB0A04F0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETPASSEDSEASONGUIDEAREACOUNT_OFFSET UNITYSDK_OFFSET(0xB0A1140)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETPERMANENTGUIDEAREAS_OFFSET UNITYSDK_OFFSET(0xB09FC90)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETSEASONGUIDEAREAS_OFFSET UNITYSDK_OFFSET(0xB09FEA0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETUNLOCKEDANDUNFINISHEDSEASONGUIDEAREAS_OFFSET UNITYSDK_OFFSET(0xB0A0060)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETWEEKCHALLENGEAREAS_OFFSET UNITYSDK_OFFSET(0xB0A0700)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETWEEKCHALLENGEDIVISIONAREAS_OFFSET UNITYSDK_OFFSET(0xB0A0960)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISANYFORMALAREAPASSED_OFFSET UNITYSDK_OFFSET(0xB0A12D0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISPERMANENTGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0xB0A0E10)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISSEASONGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0xB0A0FA0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION_SYNC_OFFSET UNITYSDK_OFFSET(0xB09F6C0)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB09F590)
#define RPG_CLIENT_ROGUETOURNAREACOLLECTION__GETORCREATEDATAITEM_OFFSET UNITYSDK_OFFSET(0xB09FA20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaCollection_TypeDefinitionIndex = 62196;

	class RogueTournAreaCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournAreaDataItem*>* _AreaDataItems; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_94*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_94*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::RogueTournAreaDataItem* GetArea(::System::UInt32 areaID)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETAREA_OFFSET))(this, areaID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetPermanentGuideAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETPERMANENTGUIDEAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetSeasonGuideAreas(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETSEASONGUIDEAREAS_OFFSET))(this, tournMode);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetUnlockedAndUnfinishedSeasonGuideAreas(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETUNLOCKEDANDUNFINISHEDSEASONGUIDEAREAS_OFFSET))(this, tournMode);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetFormalAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetFormalDivisionAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALDIVISIONAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetWeekChallengeAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETWEEKCHALLENGEAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>* GetWeekChallengeDivisionAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETWEEKCHALLENGEDIVISIONAREAS_OFFSET))(this);
		}

		::RPG::Client::RogueTournAreaDataItem* GetFormalAreaByDifficulty(::RPG::GameCore::RogueTournDifficultyType difficulty)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::PVOID, ::RPG::GameCore::RogueTournDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETFORMALAREABYDIFFICULTY_OFFSET))(this, difficulty);
		}

		::System::Boolean IsPermanentGuideAreasPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISPERMANENTGUIDEAREASPASSED_OFFSET))(this);
		}

		::System::Boolean IsSeasonGuideAreasPassed(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISSEASONGUIDEAREASPASSED_OFFSET))(this, tournMode);
		}

		::System::UInt32 GetPassedSeasonGuideAreaCount(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_GETPASSEDSEASONGUIDEAREACOUNT_OFFSET))(this, tournMode);
		}

		::System::Boolean IsAnyFormalAreaPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION_ISANYFORMALAREAPASSED_OFFSET))(this);
		}

		::RPG::Client::RogueTournAreaDataItem* _GetOrCreateDataItem(::System::UInt32 diffCompID)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREACOLLECTION__GETORCREATEDATAITEM_OFFSET))(this, diffCompID);
		}
	};
}
