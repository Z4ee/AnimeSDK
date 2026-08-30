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

#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETALLGACHAIDS_OFFSET UNITYSDK_OFFSET(0x1D1B4600)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETALLGUIDEIDS_OFFSET UNITYSDK_OFFSET(0x1D1B4C50)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D1B3CC0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1B3B90)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1B3880)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D1B3B30)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D1B3E90)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1B3900)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D1B4C90)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1B3ED0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1B40A0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D1B42A0)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B4D00)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D1B4000)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1B3F60)
#define RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1B4640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemComefromLimitExcelTable_TypeDefinitionIndex = 13761;

	class ItemComefromLimitExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FD30);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__AllGuideIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FD38);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__AllGachaIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FD40);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromLimitRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemComefromLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FD48);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FD50);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xF5D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xF5D1);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ItemComefromLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0xF5D2);
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

		static ::RPG::GameCore::ItemComefromLimitRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ItemComefromLimitRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE_GETDATA_OFFSET))(a1, a2);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ItemComefromLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemComefromLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMEFROMLIMITEXCELTABLE__ADDITEM_OFFSET))(a1);
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
