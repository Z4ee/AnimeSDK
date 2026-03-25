#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BelobogShopUIConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FE3EC0)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FE3D10)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FE39E0)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FE3CB0)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FE4090)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE3A60)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE40D0)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FE42B0)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FE4600)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE4960)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FE4210)
#define RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FE4170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BelobogShopUIConfigExcelTable_TypeDefinitionIndex = 11006;

	class BelobogShopUIConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BelobogShopUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23330);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BelobogShopUIConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BelobogShopUIConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BelobogShopUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23338);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BelobogShopUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23340);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BelobogShopUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9300);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BelobogShopUIConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x9301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BelobogShopUIConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BelobogShopUIConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BelobogShopUIConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BelobogShopUIConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BelobogShopUIConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::BelobogShopUIConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BelobogShopUIConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BelobogShopUIConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BELOBOGSHOPUICONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
