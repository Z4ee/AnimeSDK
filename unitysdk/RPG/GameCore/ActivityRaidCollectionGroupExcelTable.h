#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRaidCollectionGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1862D270)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1862D0F0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETGROUPIDBYCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0x1862DCB0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1862CDC0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1862D090)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1862D3F0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1862CE40)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1862DC10)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1862D430)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1862D610)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1862D900)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1862E120)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1862D570)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1862D4D0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1862DD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex = 11654;

	class ActivityRaidCollectionGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5960);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__CollectionIDToGroupID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5968);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5970);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5978);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C21);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C22);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRaidCollectionGroupRow* GetData(::System::UInt32 RaidCollectionGroupID)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETDATA_OFFSET))(RaidCollectionGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRaidCollectionGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidCollectionGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::UInt32 GetGroupIDByCollectionID(::System::UInt32 collectionID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETGROUPIDBYCOLLECTIONID_OFFSET))(collectionID);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
