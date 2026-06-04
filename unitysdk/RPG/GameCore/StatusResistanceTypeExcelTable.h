#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StatusResistanceTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19CBE3C0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19CBE250)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19CBDF40)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19CBE1F0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19CBE510)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19CBDFC0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19CBE550)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CBE720)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19CBE880)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CBEBA0)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19CBE680)
#define RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19CBE5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusResistanceTypeExcelTable_TypeDefinitionIndex = 13520;

	class StatusResistanceTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F390);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F398);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F3A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xF620);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StatusResistanceTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xF621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StatusResistanceTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StatusResistanceTypeRow* GetData(::RPG::GameCore::ModifierBehaviorFlag a1)
		{
			return ((::RPG::GameCore::StatusResistanceTypeRow*(*)(::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StatusResistanceTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StatusResistanceTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSRESISTANCETYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
