#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityConstValueSilverWolfRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CD7AB90)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD7AA20)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CD7A710)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CD7A9C0)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CD7AD00)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CD7A790)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CD7AD40)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CD7AF10)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CD7B070)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7B390)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CD7AE70)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CD7ADD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex = 12270;

	class ActivityConstValueSilverWolfExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B940);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B948);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B950);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityConstValueSilverWolfExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstValueSilverWolfRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityConstValueSilverWolfRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ActivityConstValueSilverWolfRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityConstValueSilverWolfRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityConstValueSilverWolfRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
