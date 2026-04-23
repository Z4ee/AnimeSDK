#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatRankConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186088F0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18608740)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18608410)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186086E0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18608AC0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18608490)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18608B00)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18608CE0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18608FE0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18609340)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18608C40)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18608BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatRankConfigExcelTable_TypeDefinitionIndex = 10782;

	class ActivityDiceCombatRankConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityDiceCombatRankConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6DC0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityDiceCombatRankConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6DC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityDiceCombatRankConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x6DD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityDiceCombatRankConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x32D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityDiceCombatRankConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x32D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityDiceCombatRankConfigRow* GetData(::System::UInt32 DiceRankID)
		{
			return ((::RPG::GameCore::ActivityDiceCombatRankConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_GETDATA_OFFSET))(DiceRankID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityDiceCombatRankConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
