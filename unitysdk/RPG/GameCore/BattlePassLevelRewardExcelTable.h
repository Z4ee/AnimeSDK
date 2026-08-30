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

#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETBPOPTIONITEMIDS_OFFSET UNITYSDK_OFFSET(0x1B300DB0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETBPPAIDREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1B300710)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B2FFD40)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B2FFBD0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1B2FF8C0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1B2FFB70)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1B2FFEE0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2FF940)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1B300DF0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2FFF20)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B3000F0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1B3003B0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B300EE0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1B300050)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1B2FFFB0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__SAFEGETVALUE_OFFSET UNITYSDK_OFFSET(0x1B300CA0)
#define RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B300750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassLevelRewardExcelTable_TypeDefinitionIndex = 12776;

	class BattlePassLevelRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xAEB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassLevelRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassLevelRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xAEB8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__TotalOptionItemIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xAEC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__TotalPaidRewardIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xAEC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xAED0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2600);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2601);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattlePassLevelRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x2602);
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

		static ::RPG::GameCore::BattlePassLevelRewardRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::BattlePassLevelRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETDATA_OFFSET))(a1, a2);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattlePassLevelRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattlePassLevelRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetBPPaidRewardIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETBPPAIDREWARDIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetBPOptionItemIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_GETBPOPTIONITEMIDS_OFFSET))(a1);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* _SafeGetValue(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE__SAFEGETVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSLEVELREWARDEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
