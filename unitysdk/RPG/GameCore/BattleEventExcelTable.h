#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/BattleEventExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B2F9600)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B2F93B0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1B2F8FF0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B2F9110)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B2F9340)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B2F9900)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2F9190)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1B2F9B30)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1B2F90A0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1B2F9690)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2F9940)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2FA820)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B2FA870)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2FACF0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B2FA7C0)
#define RPG_GAMECORE_BATTLEEVENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2F9AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventExcelTable_TypeDefinitionIndex = 12760;

	class BattleEventExcelTable : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xAAE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xAAE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xAAF0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xAAF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB00);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB08);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0xAB10);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x2560);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleEventExcelTable_TypeDefinitionIndex)->GetStaticField(0x2561);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>* a1, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>* a2, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_SETLRUOPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleEventRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1, ::RPG::GameCore::BattleEventRow* a2)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_LOADTOROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::BattleEventExcelTable_IndexKey a1, ::RPG::GameCore::BattleEventRow*& a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleEventExcelTable_IndexKey, ::RPG::GameCore::BattleEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE_TRYLOADROW_OFFSET))(a1, a2);
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
