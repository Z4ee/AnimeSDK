#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournRepositoryFormulaStoryDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1061B0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xB1074A0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_GET_DATAITEMS_OFFSET UNITYSDK_OFFSET(0xB1082A0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_INIT_OFFSET UNITYSDK_OFFSET(0xB105D60)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xB1073A0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SETALLNEWFORMULASTORIESSEENBYBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xB108010)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SETFORMULASTORYSEEN_OFFSET UNITYSDK_OFFSET(0xB107DD0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SET_DATAITEMS_OFFSET UNITYSDK_OFFSET(0xB1082B0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB1063B0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB105BC0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__ISSHOWNEWREDDOTBYREPLAY_OFFSET UNITYSDK_OFFSET(0xB1078F0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__ISSHOWNEWREDDOTBYUNLOCK_OFFSET UNITYSDK_OFFSET(0xB107620)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRepositoryFormulaStoryData_TypeDefinitionIndex = 62469;

	class RogueTournRepositoryFormulaStoryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>* _DataItems_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_INIT_OFFSET))(this, tournMode);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* unlockedIDs, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* storyReplayUnlockedIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SYNC_OFFSET))(this, unlockedIDs, storyReplayUnlockedIDs);
		}

		::System::Boolean _IsShowNewRedDotByUnlock(::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__ISSHOWNEWREDDOTBYUNLOCK_OFFSET))(this, formulaID);
		}

		::System::Boolean _IsShowNewRedDotByReplay(::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__ISSHOWNEWREDDOTBYREPLAY_OFFSET))(this, formulaID);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_ISSHOWNEWREDDOT_OFFSET))(this, formulaID);
		}

		::System::Void SetFormulaStorySeen(::System::UInt32 formulaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SETFORMULASTORYSEEN_OFFSET))(this, formulaID);
		}

		::System::Void SetAllNewFormulaStoriesSeenByBuffType(::System::UInt32 buffType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SETALLNEWFORMULASTORIESSEENBYBUFFTYPE_OFFSET))(this, buffType);
		}

		::RPG::Client::RogueTournRepositoryFormulaStoryDataItem* GetData(::System::UInt32 formulaID)
		{
			return ((::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_GETDATA_OFFSET))(this, formulaID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>* get_DataItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_GET_DATAITEMS_OFFSET))(this);
		}

		::System::Void set_DataItems(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SET_DATAITEMS_OFFSET))(this, value);
		}
	};
}
