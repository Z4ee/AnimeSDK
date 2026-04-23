#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityQuestTimeLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1862BF00)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1862BD80)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1862BA50)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1862BD20)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1862C080)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1862BAD0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1862C0C0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1862C2A0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1862C6D0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1862C9E0)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1862C200)
#define RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1862C160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestTimeLimitExcelTable_TypeDefinitionIndex = 11644;

	class ActivityQuestTimeLimitExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x57E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x57E8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x57F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestTimeLimitExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTimeLimitRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityQuestTimeLimitRow* GetData(::System::UInt32 QuestTimeLimitGroupID)
		{
			return ((::RPG::GameCore::ActivityQuestTimeLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_GETDATA_OFFSET))(QuestTimeLimitGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityQuestTimeLimitRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityQuestTimeLimitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTIMELIMITEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
