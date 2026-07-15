#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AE723B0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AE72240)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AE71F30)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AE721E0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AE72540)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE71FB0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE72580)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE72750)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AE72920)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE72C90)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AE726B0)
#define RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE72610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex = 10572;

	class AetherPassiveSkillTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x39C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x39C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x39D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x27A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherPassiveSkillTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x27A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherPassiveSkillTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherPassiveSkillTypeRow* GetData(::RPG::GameCore::AetherPassiveSkillType a1)
		{
			return ((::RPG::GameCore::AetherPassiveSkillTypeRow*(*)(::RPG::GameCore::AetherPassiveSkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherPassiveSkillTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherPassiveSkillTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERPASSIVESKILLTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
