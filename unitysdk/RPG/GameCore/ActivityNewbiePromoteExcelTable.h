#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityNewbiePromoteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D33F3E0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D33F2B0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D33EFA0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D33F250)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D33F570)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D33F020)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D33F5B0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D33F780)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D33F9F0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D33FD10)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D33F6E0)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D33F640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityNewbiePromoteExcelTable_TypeDefinitionIndex = 11226;

	class ActivityNewbiePromoteExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x55AF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x55AF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x55B00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x13020);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityNewbiePromoteExcelTable_TypeDefinitionIndex)->GetStaticField(0x13021);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityNewbiePromoteRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityNewbiePromoteRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityNewbiePromoteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityNewbiePromoteRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityNewbiePromoteRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
