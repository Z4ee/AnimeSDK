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

#define RPG_GAMECORE_PROPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C6B820)
#define RPG_GAMECORE_PROPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C6B5D0)
#define RPG_GAMECORE_PROPEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x18C6B150)
#define RPG_GAMECORE_PROPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C6B320)
#define RPG_GAMECORE_PROPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C6B560)
#define RPG_GAMECORE_PROPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C6BB40)
#define RPG_GAMECORE_PROPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C6B3A0)
#define RPG_GAMECORE_PROPEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x18C6BD80)
#define RPG_GAMECORE_PROPEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x18C6B2B0)
#define RPG_GAMECORE_PROPEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x18C6B8B0)
#define RPG_GAMECORE_PROPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C6BB80)
#define RPG_GAMECORE_PROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C6CD00)
#define RPG_GAMECORE_PROPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C6CD50)
#define RPG_GAMECORE_PROPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C6D1D0)
#define RPG_GAMECORE_PROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C6CCA0)
#define RPG_GAMECORE_PROPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C6BD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropExcelTable_TypeDefinitionIndex = 13326;

	class PropExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D3B0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D3B8);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D3C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D3C8);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D3D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D3D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropExcelTable_IndexKey, ::RPG::GameCore::PropRow*>**)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D3E0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0xD970);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PropExcelTable_TypeDefinitionIndex)->GetStaticField(0xD971);
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
