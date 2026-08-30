#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SubMissionExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CB07100)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CB06EB0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1CB06AF0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CB06C10)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CB06E40)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CB07430)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CB06C90)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1CB07660)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1CB06BA0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1CB07190)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CB07470)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CB07BC0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CB07C20)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB080A0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CB07B60)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CB07600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionExcelTable_TypeDefinitionIndex = 14033;

	class SubMissionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x23170);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x23178);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x23180);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x23188);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x23190);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x23198);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x231A0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xB370);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SubMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xB371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SubMissionRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::SubMissionRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::SubMissionExcelTable_IndexKey a1, ::RPG::GameCore::SubMissionRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SubMissionExcelTable_IndexKey, ::RPG::GameCore::SubMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SubMissionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
