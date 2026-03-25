#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemUseBuffDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17325F70)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17325DC0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17325A90)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17325D60)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17326140)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17325B10)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17326180)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17326360)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17326A70)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17326DD0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173262C0)
#define RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17326220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseBuffDataExcelTable_TypeDefinitionIndex = 12686;

	class ItemUseBuffDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseBuffDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x24DC0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseBuffDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x24DC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseBuffDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x24DD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemUseBuffDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemUseBuffDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseBuffDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemUseBuffDataRow* GetData(::System::UInt32 UseDataID)
		{
			return ((::RPG::GameCore::ItemUseBuffDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_GETDATA_OFFSET))(UseDataID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemUseBuffDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemUseBuffDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEBUFFDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
