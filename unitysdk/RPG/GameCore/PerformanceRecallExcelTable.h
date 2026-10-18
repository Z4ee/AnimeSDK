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

#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D8D1480)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D8D1350)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1D8D2030)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYSUBCATEGORY_OFFSET UNITYSDK_OFFSET(0x1D8D2670)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D8D2730)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLUNLOCKMISSIONS_OFFSET UNITYSDK_OFFSET(0x1D8D27B0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETSUBCATEGORYIDSBYCATEGORY_OFFSET UNITYSDK_OFFSET(0x1D8D25B0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D8D1040)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D8D12F0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D8D15D0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8D10C0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D8D2B90)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8D1610)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDCONDITIONMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1D8D29C0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8D17E0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D8D1D10)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8D2D70)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D8D1740)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D8D16A0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEADDTODICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D8D27F0)
#define RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D8D20F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallExcelTable_TypeDefinitionIndex = 14336;

	class PerformanceRecallExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__SubCategoryToRecallIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B20);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B28);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B30);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__UnlockMissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B38);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__CategoryToRecallIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B40);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__RecallHeight()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B48);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__CategoryToSubCategoryIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B50);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x53B58);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x12A80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x12A81);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallExcelTable_TypeDefinitionIndex)->GetStaticField(0x12A82);
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

		static ::RPG::GameCore::PerformanceRecallRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PerformanceRecallRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceRecallRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallIDsByCategory(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYCATEGORY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetSubCategoryIDsByCategory(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETSUBCATEGORYIDSBYCATEGORY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallIDsBySubCategory(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLIDSBYSUBCATEGORY_OFFSET))(a1);
		}

		static ::System::UInt32 GetRecallItemHeight(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLITEMHEIGHT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetRecallUnlockMissions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_GETRECALLUNLOCKMISSIONS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void _SafeAddToDictionary(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__SAFEADDTODICTIONARY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddConditionMainMission(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE__ADDCONDITIONMAINMISSION_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
