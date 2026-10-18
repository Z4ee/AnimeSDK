#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournRepositoryFormulaStoryDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE03BB80)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xE03CD50)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_GET_DATAITEMS_OFFSET UNITYSDK_OFFSET(0xE03D910)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_INIT_OFFSET UNITYSDK_OFFSET(0xE03B6A0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xE03CC20)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SETALLNEWFORMULASTORIESSEENBYBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xE03D610)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SETFORMULASTORYSEEN_OFFSET UNITYSDK_OFFSET(0xE03D370)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SET_DATAITEMS_OFFSET UNITYSDK_OFFSET(0xE03D920)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE03BD70)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE03B510)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__ISSHOWNEWREDDOTBYREPLAY_OFFSET UNITYSDK_OFFSET(0xE03D090)
#define RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__ISSHOWNEWREDDOTBYUNLOCK_OFFSET UNITYSDK_OFFSET(0xE03CEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRepositoryFormulaStoryData_TypeDefinitionIndex = 67776;

	class RogueTournRepositoryFormulaStoryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>* _DataItems_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsShowNewRedDotByUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__ISSHOWNEWREDDOTBYUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean _IsShowNewRedDotByReplay(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA__ISSHOWNEWREDDOTBYREPLAY_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_ISSHOWNEWREDDOT_OFFSET))(this, a1);
		}

		::System::Void SetFormulaStorySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SETFORMULASTORYSEEN_OFFSET))(this, a1);
		}

		::System::Void SetAllNewFormulaStoriesSeenByBuffType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SETALLNEWFORMULASTORIESSEENBYBUFFTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournRepositoryFormulaStoryDataItem* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_GETDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>* get_DataItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_GET_DATAITEMS_OFFSET))(this);
		}

		::System::Void set_DataItems(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYFORMULASTORYDATA_SET_DATAITEMS_OFFSET))(this, a1);
		}
	};
}
