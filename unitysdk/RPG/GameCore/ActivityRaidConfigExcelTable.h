#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRaidConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F104B0)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F10300)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F0FFD0)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F102A0)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F10680)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F10050)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F106C0)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F108A0)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F10A70)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F10DD0)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F10800)
#define RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F10760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidConfigExcelTable_TypeDefinitionIndex = 13328;

	class ActivityRaidConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D850);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D858);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D860);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x78F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x78F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRaidConfigRow* GetData(::System::UInt32 RaidID, ::System::UInt32 HardLevel)
		{
			return ((::RPG::GameCore::ActivityRaidConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_GETDATA_OFFSET))(RaidID, HardLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRaidConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
