#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRaidCollectionModeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1862F6E0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1862F560)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1862F230)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1862F500)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1862F8B0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1862F2B0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1862F8F0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1862FAD0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1862FD20)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18630030)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1862FA30)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1862F990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex = 11652;

	class ActivityRaidCollectionModeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionModeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionModeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B10);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B18);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x5B20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2CB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionModeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionModeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionModeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionModeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRaidCollectionModeRow* GetData(::System::UInt32 RaidCollectionTabID)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionModeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GETDATA_OFFSET))(RaidCollectionTabID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRaidCollectionModeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidCollectionModeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
