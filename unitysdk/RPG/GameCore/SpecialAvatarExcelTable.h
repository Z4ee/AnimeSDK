#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17758BC0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177589A0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x17758520)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x177586F0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17758930)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17758F70)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17758770)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x177591B0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x17758680)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x17758C70)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17758FB0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1775AAB0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1775AB00)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1775AFD0)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1775AA50)
#define RPG_GAMECORE_SPECIALAVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17759150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarExcelTable_TypeDefinitionIndex = 13859;

	class SpecialAvatarExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x113D0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x113D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x113E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x113E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x113F0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x113F8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x11400);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x53D0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpecialAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x53D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpecialAvatarRow* GetData(::System::UInt32 SpecialAvatarID, ::System::UInt32 WorldLevel)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_GETDATA_OFFSET))(SpecialAvatarID, WorldLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::SpecialAvatarRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::SpecialAvatarExcelTable_IndexKey key, ::RPG::GameCore::SpecialAvatarRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SpecialAvatarExcelTable_IndexKey, ::RPG::GameCore::SpecialAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpecialAvatarRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATAREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
