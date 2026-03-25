#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRewardRogueEndlessRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F13070)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F12EF0)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F12BC0)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F12E90)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F13240)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F12C40)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F13280)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F13460)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F13680)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F13990)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F133C0)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F13320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRewardRogueEndlessExcelTable_TypeDefinitionIndex = 11263;

	class ActivityRewardRogueEndlessExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardRogueEndlessExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D8D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardRogueEndlessExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D8D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRewardRogueEndlessRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRewardRogueEndlessRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardRogueEndlessExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D8E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardRogueEndlessExcelTable_TypeDefinitionIndex)->GetStaticField(0x7910);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRewardRogueEndlessExcelTable_TypeDefinitionIndex)->GetStaticField(0x7911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRewardRogueEndlessRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRewardRogueEndlessRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRewardRogueEndlessRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRewardRogueEndlessRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRewardRogueEndlessRow* GetData(::System::UInt32 RewardLevel)
		{
			return ((::RPG::GameCore::ActivityRewardRogueEndlessRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_GETDATA_OFFSET))(RewardLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRewardRogueEndlessRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRewardRogueEndlessRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
