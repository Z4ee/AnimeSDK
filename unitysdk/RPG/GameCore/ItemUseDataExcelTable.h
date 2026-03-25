#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemUseDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17328320)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17328170)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17327E40)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17328110)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173284F0)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17327EC0)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17328530)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17328710)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17328950)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17328CB0)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17328670)
#define RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173285D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseDataExcelTable_TypeDefinitionIndex = 12679;

	class ItemUseDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x24EB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x24EB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x24EC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemUseDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemUseDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemUseDataRow* GetData(::System::UInt32 UseDataID)
		{
			return ((::RPG::GameCore::ItemUseDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_GETDATA_OFFSET))(UseDataID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemUseDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemUseDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSEDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
