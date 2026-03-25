#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PropExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PROPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1751BDE0)
#define RPG_GAMECORE_PROPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1751BB90)
#define RPG_GAMECORE_PROPEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1751B710)
#define RPG_GAMECORE_PROPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1751B8E0)
#define RPG_GAMECORE_PROPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1751BB20)
#define RPG_GAMECORE_PROPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1751C100)
#define RPG_GAMECORE_PROPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1751B960)
#define RPG_GAMECORE_PROPEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1751C340)
#define RPG_GAMECORE_PROPEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1751B870)
#define RPG_GAMECORE_PROPEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1751BE70)
#define RPG_GAMECORE_PROPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1751C140)
#define RPG_GAMECORE_PROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1751D2C0)
#define RPG_GAMECORE_PROPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1751D310)
#define RPG_GAMECORE_PROPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1751D790)
#define RPG_GAMECORE_PROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1751D260)
#define RPG_GAMECORE_PROPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1751C2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropExcelTable_TypeDefinitionIndex = 12864;

	class PropExcelTable : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x311E0);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x311E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x311F0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x311F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x31200);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x31208);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x31210);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x100E0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x100E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PropRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::PropRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::PropRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PropExcelTable_IndexKey key, ::RPG::GameCore::PropRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PropRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
