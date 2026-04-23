#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1860D3B0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1860D230)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETGEARIDBYDAMAGECUSTOMNAME_OFFSET UNITYSDK_OFFSET(0x1860DF00)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1860CF00)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1860D1D0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1860D580)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1860CF80)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1860E1C0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1860D5C0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1860D7A0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1860DBF0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1860E2A0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1860D700)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1860D660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex = 10909;

	class ActivityEvolveBuildGearCollectionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x7340);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x7348);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x7350);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet__DamageCustomNameMappingGear()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x7358);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x3420);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x3421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::UInt32 GetGearIDByDamageCustomName(::System::String* customName)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETGEARIDBYDAMAGECUSTOMNAME_OFFSET))(customName);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
