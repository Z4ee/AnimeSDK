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

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x193FCA40)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193FC910)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETGROUPIDBYCOLLECTIONID_OFFSET UNITYSDK_OFFSET(0x193FD440)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x193FC600)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x193FC8B0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x193FCB90)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x193FC680)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x193FD3B0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x193FCBD0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x193FCDA0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x193FD090)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x193FD8B0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x193FCD00)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x193FCC60)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x193FD4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex = 11753;

	class ActivityRaidCollectionGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x12660);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__CollectionIDToGroupID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x12668);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x12670);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x12678);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5670);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5671);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x5672);
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

		static ::RPG::GameCore::ActivityRaidCollectionGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRaidCollectionGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidCollectionGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::UInt32 GetGroupIDByCollectionID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE_GETGROUPIDBYCOLLECTIONID_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
