#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityPunkLordRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F06D40)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F06B90)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F06860)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F06B30)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F06F10)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F068E0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F06F50)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F07130)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F07380)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F076E0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F07090)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F06FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordRewardExcelTable_TypeDefinitionIndex = 11220;

	class ActivityPunkLordRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D670);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D678);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D680);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x7840);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityPunkLordRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x7841);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPunkLordRewardRow* GetData(::System::UInt32 RewardLevel)
		{
			return ((::RPG::GameCore::ActivityPunkLordRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_GETDATA_OFFSET))(RewardLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityPunkLordRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPunkLordRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
