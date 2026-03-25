#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class PerformanceRecallRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1749A690)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1749A4E0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1749B290)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x1749B800)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1749B870)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0x1749B900)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETSUBCATEGORYIDSBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1749B790)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1749A1B0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1749A480)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1749A860)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1749A230)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1749BBE0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1749A8A0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDCONDITIONMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1749BAA0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1749AA80)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1749AF30)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1749BE30)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1749A9E0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1749A940)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEADDTODICTIONARY_OFFSET UNITYSDK_OFFSET(0x1749B940)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1749B300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallExcelTable_TypeDefinitionIndex = 13132;

	class PerformanceRecallExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__CategoryToRecallIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__SubCategoryToRecallIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__RecallHeight()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAF0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__UnlockMissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FB00);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__CategoryToSubCategoryIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FB08);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FB10);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FB18);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0xF640);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0xF641);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0xF642);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceRecallRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::PerformanceRecallRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceRecallRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallIDsByCategory(::System::UInt32 categoryID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYCATEGORY_OFFSET))(categoryID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetSubCategoryIDsByCategory(::System::UInt32 categoryID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETSUBCATEGORYIDSBYCATEGORY_OFFSET))(categoryID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallIDsBySubCategory(::System::UInt32 subCategoryID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYSUBCATEGORY_OFFSET))(subCategoryID);
		}

		static ::System::UInt32 GetRecallItemHeight(::System::UInt32 recallID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLITEMHEIGHT_OFFSET))(recallID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallUnlockMissions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLUNLOCKMISSIONS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _SafeAddToDictionary(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* dictionary, ::System::UInt32 key, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEADDTODICTIONARY_OFFSET))(dictionary, key, value);
		}

		static ::System::Void _AddConditionMainMission(::Il2CppArray<::RPG::GameCore::ConditionParam*>* conditionParams)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDCONDITIONMAINMISSION_OFFSET))(conditionParams);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
