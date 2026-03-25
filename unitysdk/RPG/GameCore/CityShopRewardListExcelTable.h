#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CityShopRewardListRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x170B0640)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x170B0490)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170B0160)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x170B0430)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x170B0850)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x170B01E0)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x170B0890)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B0A70)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170B0CB0)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170B1060)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x170B09D0)
#define RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x170B0930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CityShopRewardListExcelTable_TypeDefinitionIndex = 11910;

	class CityShopRewardListExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CityShopRewardListExcelTable_TypeDefinitionIndex)->GetStaticField(0x27820);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CityShopRewardListExcelTable_TypeDefinitionIndex)->GetStaticField(0x27828);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopRewardListRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopRewardListRow*>**)Il2CppClass::FromTypeDefinitionIndex(CityShopRewardListExcelTable_TypeDefinitionIndex)->GetStaticField(0x27830);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CityShopRewardListExcelTable_TypeDefinitionIndex)->GetStaticField(0xCEB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CityShopRewardListExcelTable_TypeDefinitionIndex)->GetStaticField(0xCEB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopRewardListRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopRewardListRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopRewardListRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CityShopRewardListRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CityShopRewardListRow* GetData(::System::UInt32 GroupID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::CityShopRewardListRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_GETDATA_OFFSET))(GroupID, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CityShopRewardListRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::CityShopRewardListRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
