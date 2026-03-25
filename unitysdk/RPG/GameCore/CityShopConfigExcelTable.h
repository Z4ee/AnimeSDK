#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CityShopConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x170AF630)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x170AF480)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170AF150)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x170AF420)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x170AF7B0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x170AF1D0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x170AF7F0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170AF9D0)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170AFD00)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170B0010)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x170AF930)
#define RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x170AF890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CityShopConfigExcelTable_TypeDefinitionIndex = 11908;

	class CityShopConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CityShopConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27790);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(CityShopConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27798);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CityShopConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x277A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CityShopConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CityShopConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCE71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CityShopConfigRow* GetData(::System::UInt32 ShopID)
		{
			return ((::RPG::GameCore::CityShopConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_GETDATA_OFFSET))(ShopID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CityShopConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::CityShopConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
