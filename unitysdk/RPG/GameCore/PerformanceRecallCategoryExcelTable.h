#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceRecallCategoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETALLMAINCATEGORY_OFFSET UNITYSDK_OFFSET(0x17499B50)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17499180)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17498FD0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17498CA0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17498F70)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17499350)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17498D20)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x17499FA0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17499390)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17499570)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x174997F0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1749A000)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174994D0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17499430)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17499B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallCategoryExcelTable_TypeDefinitionIndex = 13134;

	class PerformanceRecallCategoryExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAB8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__MainCategoryIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x2FAC8);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xF630);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xF631);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xF632);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceRecallCategoryRow* GetData(::System::UInt32 CategoryID)
		{
			return ((::RPG::GameCore::PerformanceRecallCategoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETDATA_OFFSET))(CategoryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceRecallCategoryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceRecallCategoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllMainCategory()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETALLMAINCATEGORY_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
