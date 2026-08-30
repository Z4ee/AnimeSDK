#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityFarmMultipleDropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CD89040)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD88F10)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CD88C00)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CD88EB0)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CD89190)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CD88C80)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CD891D0)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CD893A0)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CD89A60)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD89D80)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CD89300)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CD89260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFarmMultipleDropExcelTable_TypeDefinitionIndex = 11461;

	class ActivityFarmMultipleDropExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFarmMultipleDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x53890);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFarmMultipleDropRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFarmMultipleDropRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFarmMultipleDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x53898);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFarmMultipleDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x538A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityFarmMultipleDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x11880);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityFarmMultipleDropExcelTable_TypeDefinitionIndex)->GetStaticField(0x11881);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFarmMultipleDropRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFarmMultipleDropRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFarmMultipleDropRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityFarmMultipleDropRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityFarmMultipleDropRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityFarmMultipleDropRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityFarmMultipleDropRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityFarmMultipleDropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
