#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/StatusExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STATUSEXCELTABLE_GETBYMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x18EA07F0)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18E9F290)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18E9F070)
#define RPG_GAMECORE_STATUSEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x18E9EBF0)
#define RPG_GAMECORE_STATUSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18E9EDC0)
#define RPG_GAMECORE_STATUSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18E9F000)
#define RPG_GAMECORE_STATUSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18E9F5A0)
#define RPG_GAMECORE_STATUSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18E9EE40)
#define RPG_GAMECORE_STATUSEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x18E9F7E0)
#define RPG_GAMECORE_STATUSEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x18E9ED50)
#define RPG_GAMECORE_STATUSEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x18E9F320)
#define RPG_GAMECORE_STATUSEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18EA0B50)
#define RPG_GAMECORE_STATUSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18E9F5E0)
#define RPG_GAMECORE_STATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EA0320)
#define RPG_GAMECORE_STATUSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18EA0370)
#define RPG_GAMECORE_STATUSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EA0B90)
#define RPG_GAMECORE_STATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18EA02C0)
#define RPG_GAMECORE_STATUSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18E9F780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusExcelTable_TypeDefinitionIndex = 14386;

	class StatusExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x54600);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x54608);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x54610);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x54618);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet__ModifierToStatusMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x54620);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x54628);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x54630);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0x54638);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0xFFC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StatusExcelTable_TypeDefinitionIndex)->GetStaticField(0xFFC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StatusRow* GetData(::System::UInt32 StatusID)
		{
			return ((::RPG::GameCore::StatusRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETDATA_OFFSET))(StatusID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::StatusRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::StatusExcelTable_IndexKey key, ::RPG::GameCore::StatusRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StatusExcelTable_IndexKey, ::RPG::GameCore::StatusRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StatusRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::RPG::GameCore::StatusRow* GetByModifierName(::System::String* sModifierName)
		{
			return ((::RPG::GameCore::StatusRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_GETBYMODIFIERNAME_OFFSET))(sModifierName);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
