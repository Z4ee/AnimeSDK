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

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CDA38A0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CDA3770)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CDA3460)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CDA3710)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CDA3A30)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CDA34E0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CDA3A70)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CDA3C40)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CDA3E80)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDA41A0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CDA3BA0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CDA3B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex = 12240;

	class ActivityRaidCollectionModeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionModeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionModeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x54920);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x54928);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x54930);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x11C40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityRaidCollectionModeExcelTable_TypeDefinitionIndex)->GetStaticField(0x11C41);
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

		static ::RPG::GameCore::ActivityRaidCollectionModeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionModeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityRaidCollectionModeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidCollectionModeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
