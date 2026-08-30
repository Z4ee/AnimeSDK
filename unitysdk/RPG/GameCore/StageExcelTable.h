#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/StageExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D556DE0)
#define RPG_GAMECORE_STAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D556BC0)
#define RPG_GAMECORE_STAGEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D5569B0)
#define RPG_GAMECORE_STAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D556AD0)
#define RPG_GAMECORE_STAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D556B50)
#define RPG_GAMECORE_STAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D555CC0)
#define RPG_GAMECORE_STAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D555D00)
#define RPG_GAMECORE_STAGEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D5560A0)
#define RPG_GAMECORE_STAGEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D556A60)
#define RPG_GAMECORE_STAGEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D5561D0)
#define RPG_GAMECORE_STAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D555EB0)
#define RPG_GAMECORE_STAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5564D0)
#define RPG_GAMECORE_STAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D556530)
#define RPG_GAMECORE_STAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D556E70)
#define RPG_GAMECORE_STAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D556470)
#define RPG_GAMECORE_STAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D556040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageExcelTable_TypeDefinitionIndex = 14980;

	class StageExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D830);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>**)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D838);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D840);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>**)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D848);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D850);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D858);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D860);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9FD0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9FD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::StageRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::StageExcelTable_IndexKey a1, ::RPG::GameCore::StageRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::StageExcelTable_IndexKey, ::RPG::GameCore::StageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
