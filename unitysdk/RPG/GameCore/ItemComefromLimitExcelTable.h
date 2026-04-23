#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemComefromLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETALLGACHAIDS_OFFSET UNITYSDK_OFFSET(0x18A264C0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETALLGUIDEIDS_OFFSET UNITYSDK_OFFSET(0x18A269B0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A25B30)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A259B0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A25680)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A25950)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A25D40)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A25700)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18A269F0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A25D80)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A25F60)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A26160)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A26A90)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A25EC0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A25E20)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18A26500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComefromLimitExcelTable_TypeDefinitionIndex = 13142;

	class ItemComefromLimitExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__AllGachaIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EF20);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__AllGuideIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EF28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EF30);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EF38);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromLimitRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EF40);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xE140);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xE141);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xE142);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromLimitRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromLimitRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromLimitRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromLimitRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ItemComefromLimitRow* GetData(::System::UInt32 ID, ::System::UInt32 ComefromID)
		{
			return ((::RPG::GameCore::ItemComefromLimitRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETDATA_OFFSET))(ID, ComefromID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemComefromLimitRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemComefromLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllGachaIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETALLGACHAIDS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllGuideIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETALLGUIDEIDS_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
