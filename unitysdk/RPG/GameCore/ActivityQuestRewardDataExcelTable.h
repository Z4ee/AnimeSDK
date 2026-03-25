#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityQuestRewardDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F08C20)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F08A70)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F08740)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F08A10)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F08DA0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F087C0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F08DE0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F08FC0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F09240)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F09550)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F08F20)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F08E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardDataExcelTable_TypeDefinitionIndex = 11236;

	class ActivityQuestRewardDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D6F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D6F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D700);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x7870);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x7871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityQuestRewardDataRow* GetData(::System::UInt32 QuestTabID)
		{
			return ((::RPG::GameCore::ActivityQuestRewardDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_GETDATA_OFFSET))(QuestTabID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityQuestRewardDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityQuestRewardDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
