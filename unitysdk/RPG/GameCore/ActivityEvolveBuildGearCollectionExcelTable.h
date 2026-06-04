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

#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x193DDAE0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193DD9B0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETGEARIDBYDAMAGECUSTOMNAME_OFFSET UNITYSDK_OFFSET(0x193DE5A0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x193DD6A0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x193DD950)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x193DDC70)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x193DD720)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x193DE8D0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x193DDCB0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x193DDE80)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x193DE280)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x193DE990)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x193DDDE0)
#define RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x193DDD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex = 10962;

	class ActivityEvolveBuildGearCollectionExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet__DamageCustomNameMappingGear()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5ADD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5ADD8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5ADE0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5ADE8);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x11C50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityEvolveBuildGearCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x11C51);
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

		static ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetGearIDByDamageCustomName(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_GETGEARIDBYDAMAGECUSTOMNAME_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEVOLVEBUILDGEARCOLLECTIONEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
