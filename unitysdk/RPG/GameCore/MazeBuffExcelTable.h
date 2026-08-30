#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MazeBuffExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D2735A0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D273350)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1D272F90)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D2730B0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D2732E0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D273940)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D273130)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1D273B70)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1D273040)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1D273650)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D273980)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D274D30)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D274D80)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D275270)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D274CD0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D273B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffExcelTable_TypeDefinitionIndex = 13922;

	class MazeBuffExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x372F0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x372F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x37300);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x37308);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x37310);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x37318);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x37320);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xE7B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xE7B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazeBuffRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::MazeBuffRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MazeBuffExcelTable_IndexKey a1, ::RPG::GameCore::MazeBuffRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazeBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
