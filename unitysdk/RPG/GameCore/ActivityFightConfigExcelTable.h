#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/LevelDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityFightConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x193E9A20)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x193E98B0)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x193E95A0)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x193E9850)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x193E9C00)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x193E9620)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x193E9C40)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x193E9E10)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x193EA190)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x193EA540)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x193E9D70)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x193E9CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFightConfigExcelTable_TypeDefinitionIndex = 11094;

	class ActivityFightConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFightConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19C20);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFightConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19C28);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFightConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x19C30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityFightConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8720);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityFightConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8721);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFightConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFightConfigRow* GetData(::System::UInt32 a1, ::RPG::GameCore::LevelDifficulty a2)
		{
			return ((::RPG::GameCore::ActivityFightConfigRow*(*)(::System::UInt32, ::RPG::GameCore::LevelDifficulty))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFightConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFightConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
