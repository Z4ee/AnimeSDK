#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePassLevelRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETBPOPTIONITEMIDS_OFFSET UNITYSDK_OFFSET(0x16FDC0A0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETBPPAIDREWARDIDS_OFFSET UNITYSDK_OFFSET(0x16FDBAD0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FDB0C0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FDAF10)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FDABE0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FDAEB0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FDB290)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FDAC60)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x16FDC0E0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FDB2D0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FDB4B0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FDB770)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FDC1F0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FDB410)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FDB370)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__SAFEGETVALUE_OFFSET UNITYSDK_OFFSET(0x16FDBF60)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x16FDBB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassLevelRewardExcelTable_TypeDefinitionIndex = 11753;

	class BattlePassLevelRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__TotalOptionItemIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x22CF0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x22CF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassLevelRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassLevelRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x22D00);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x22D08);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__TotalPaidRewardIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x22D10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x9180);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x9181);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x9182);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassLevelRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassLevelRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassLevelRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassLevelRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattlePassLevelRewardRow* GetData(::System::UInt32 GroupID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::BattlePassLevelRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETDATA_OFFSET))(GroupID, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattlePassLevelRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattlePassLevelRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetBPPaidRewardIDs(::System::UInt32 rewardGroupID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETBPPAIDREWARDIDS_OFFSET))(rewardGroupID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetBPOptionItemIDs(::System::UInt32 rewardGroupID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETBPOPTIONITEMIDS_OFFSET))(rewardGroupID);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _SafeGetValue(::System::UInt32 key, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* dictionary)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__SAFEGETVALUE_OFFSET))(key, dictionary);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
