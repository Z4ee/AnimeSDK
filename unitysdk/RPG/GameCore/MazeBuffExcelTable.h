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

#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173BBD30)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173BBAE0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x173BB660)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173BB830)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173BBA70)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173BC0E0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173BB8B0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x173BC320)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x173BB7C0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x173BBDE0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173BC120)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173BD4F0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173BD540)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BDA10)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173BD490)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173BC2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffExcelTable_TypeDefinitionIndex = 12816;

	class MazeBuffExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x28D30);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x28D38);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x28D40);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x28D48);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x28D50);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x28D58);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x28D60);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xD6E0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazeBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xD6E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
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

		static ::RPG::GameCore::MazeBuffRow* GetData(::System::UInt32 ID, ::System::UInt32 Lv)
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_GETDATA_OFFSET))(ID, Lv);
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

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::MazeBuffRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MazeBuffExcelTable_IndexKey key, ::RPG::GameCore::MazeBuffRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MazeBuffExcelTable_IndexKey, ::RPG::GameCore::MazeBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazeBuffRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
