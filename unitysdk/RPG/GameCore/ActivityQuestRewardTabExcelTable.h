#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityQuestRewardTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1862AEC0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1862AD10)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1862A9E0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1862ACB0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1862B040)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1862AA60)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1862B080)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1862B260)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1862B460)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1862B770)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1862B1C0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1862B120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardTabExcelTable_TypeDefinitionIndex = 11637;

	class ActivityQuestRewardTabExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x55E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x55E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x55F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityQuestRewardTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestRewardTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityQuestRewardTabRow* GetData(::System::UInt32 QuestTabGroupID)
		{
			return ((::RPG::GameCore::ActivityQuestRewardTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_GETDATA_OFFSET))(QuestTabGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityQuestRewardTabRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityQuestRewardTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
