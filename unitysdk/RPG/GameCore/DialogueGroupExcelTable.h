#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/DialogueGroupExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class DialogueGroupRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18860460)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18860210)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1885FD90)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1885FF60)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188601A0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18860780)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1885FFE0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x188609C0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1885FEF0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x188604F0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188607C0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188610C0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18861110)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18861590)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18861060)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18860960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueGroupExcelTable_TypeDefinitionIndex = 12408;

	class DialogueGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x33230);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x33238);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x33240);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x33248);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x33250);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x33258);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x33260);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xC720);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DialogueGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0xC721);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DialogueGroupRow* GetData(::System::UInt32 GroupID)
		{
			return ((::RPG::GameCore::DialogueGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_GETDATA_OFFSET))(GroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::DialogueGroupRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::DialogueGroupExcelTable_IndexKey key, ::RPG::GameCore::DialogueGroupRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DialogueGroupExcelTable_IndexKey, ::RPG::GameCore::DialogueGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DialogueGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
