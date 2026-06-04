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

#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETALLMAINCATEGORY_OFFSET UNITYSDK_OFFSET(0x199F6060)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199F56D0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199F5560)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199F5250)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199F5500)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199F5860)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199F52D0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x199F65C0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199F58A0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199F5A70)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199F5CF0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199F6610)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199F59D0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199F5930)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x199F60A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallCategoryExcelTable_TypeDefinitionIndex = 13666;

	class PerformanceRecallCategoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B10);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__MainCategoryIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B18);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B20);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x34B28);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xA540);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xA541);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xA542);
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

		static ::RPG::GameCore::PerformanceRecallCategoryRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PerformanceRecallCategoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceRecallCategoryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceRecallCategoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEM_OFFSET))(a1);
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
