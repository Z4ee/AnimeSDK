#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRaidCollectionQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186306A0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186304F0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186301C0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18630490)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18630870)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18630240)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186308B0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18630A90)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18630CC0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18631020)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186309F0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18630950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionQuestExcelTable_TypeDefinitionIndex = 11658;

	class ActivityRaidCollectionQuestExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B80);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B88);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRaidCollectionQuestRow* GetData(::System::UInt32 QuestTabID)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_GETDATA_OFFSET))(QuestTabID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRaidCollectionQuestRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidCollectionQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
