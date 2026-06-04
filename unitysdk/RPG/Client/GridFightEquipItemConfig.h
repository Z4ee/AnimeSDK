#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/GridFightEquipDressType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipFuncType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCategoryInfoConfig; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightElationEquipDescConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xBB22FD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xBB23BA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ABILITYPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBB23BC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_BASEITEMID_OFFSET UNITYSDK_OFFSET(0xBB238B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CANBEROLL_OFFSET UNITYSDK_OFFSET(0xBB23A60)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CATEGORYINFOCONFIG_OFFSET UNITYSDK_OFFSET(0xBB23A10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0xBB23C20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DRESSRULEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBB23AE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DRESSRULE_OFFSET UNITYSDK_OFFSET(0xBB23AC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ELATIONDESC_OFFSET UNITYSDK_OFFSET(0xBB23D70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0xBB23B00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPDESC_OFFSET UNITYSDK_OFFSET(0xBB23B60)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPFUNCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBB23B80)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPFUNC_OFFSET UNITYSDK_OFFSET(0xBB23B20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_GENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xBB23BE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ISDISPLAYSPECIALPARAM_OFFSET UNITYSDK_OFFSET(0xBB23B40)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ISVARIANT_OFFSET UNITYSDK_OFFSET(0xBB236C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xBB239F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xBB12BE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_NEEDEQUIPSLOT_OFFSET UNITYSDK_OFFSET(0xBB23A50)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_PROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xBB23A30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_SHOWRECOMMENDROLE_OFFSET UNITYSDK_OFFSET(0xBB23D30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_SKILLTAGNAMES_OFFSET UNITYSDK_OFFSET(0xBB23C00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_STATICRECOMMENDROLEIDLIST_OFFSET UNITYSDK_OFFSET(0xBB23D50)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xBB23BB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ABILITYPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBB23BD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_CATEGORYINFOCONFIG_OFFSET UNITYSDK_OFFSET(0xBB23A20)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DRESSRULEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBB23AF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DRESSRULE_OFFSET UNITYSDK_OFFSET(0xBB23AD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPCATEGORY_OFFSET UNITYSDK_OFFSET(0xBB23B10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPDESC_OFFSET UNITYSDK_OFFSET(0xBB23B70)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPFUNCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBB23B90)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPFUNC_OFFSET UNITYSDK_OFFSET(0xBB23B30)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_GENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xBB23BF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ISDISPLAYSPECIALPARAM_OFFSET UNITYSDK_OFFSET(0xBB23B50)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xBB23A00)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_PROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xBB23A40)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_SHOWRECOMMENDROLE_OFFSET UNITYSDK_OFFSET(0xBB23D40)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_SKILLTAGNAMES_OFFSET UNITYSDK_OFFSET(0xBB23C10)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_STATICRECOMMENDROLEIDLIST_OFFSET UNITYSDK_OFFSET(0xBB23D60)
#define RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB14D80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipItemConfig_TypeDefinitionIndex = 60311;

	class GridFightEquipItemConfig : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet_GetItemConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipItemConfig_TypeDefinitionIndex)->GetStaticField(0x2BD50);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* _StaticRecommendRoleIDList_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _DressRuleParamList_k__BackingField; // 0x18
		::RPG::Client::GridFightEquipCategoryInfoConfig* _CategoryInfoConfig_k__BackingField; // 0x20
		::RPG::GameCore::GridFightElationEquipDescConfigRow* _ElationDescConfigRow; // 0x28
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* _GeneralPropertyList_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* _PropertyList_k__BackingField; // 0x38
		::RPG::Client::GridFightItemConfig* _ItemConfig_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _SkillTagNames_k__BackingField; // 0x48
		::Il2CppArray<::System::UInt32>* _EquipFuncParamList_k__BackingField; // 0x50
		::Il2CppArray<::RPG::GameCore::FixPoint>* _AbilityParamList_k__BackingField; // 0x58
		::System::String* _AbilityName_k__BackingField; // 0x60
		::RPG::Client::TextID _EquipDesc_k__BackingField; // 0x68
		::RPG::GameCore::GridFightEquipFuncType _EquipFunc_k__BackingField; // 0x78
		::RPG::GameCore::GridFightEquipDressType _DressRule_k__BackingField; // 0x7C
		::RPG::GameCore::GridFightEquipCategory _EquipCategory_k__BackingField; // 0x80
		::System::Boolean _IsDisplaySpecialParam_k__BackingField; // 0x84
		::System::Boolean _ShowRecommendRole_k__BackingField; // 0x85

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightEquipItemConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ITEMID_OFFSET))(this);
		}

		::System::Boolean get_IsVariant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ISVARIANT_OFFSET))(this);
		}

		::System::UInt32 get_BaseItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_BASEITEMID_OFFSET))(this);
		}

		::RPG::Client::GridFightItemConfig* get_ItemConfig()
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ITEMCONFIG_OFFSET))(this);
		}

		::System::Void set_ItemConfig(::RPG::Client::GridFightItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ITEMCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipCategoryInfoConfig* get_CategoryInfoConfig()
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CATEGORYINFOCONFIG_OFFSET))(this);
		}

		::System::Void set_CategoryInfoConfig(::RPG::Client::GridFightEquipCategoryInfoConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipCategoryInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_CATEGORYINFOCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* get_PropertyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_PROPERTYLIST_OFFSET))(this);
		}

		::System::Void set_PropertyList(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_PROPERTYLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedEquipSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_NEEDEQUIPSLOT_OFFSET))(this);
		}

		::System::Boolean get_CanBeRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CANBEROLL_OFFSET))(this);
		}

		::RPG::GameCore::GridFightEquipDressType get_DressRule()
		{
			return ((::RPG::GameCore::GridFightEquipDressType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DRESSRULE_OFFSET))(this);
		}

		::System::Void set_DressRule(::RPG::GameCore::GridFightEquipDressType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipDressType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DRESSRULE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_DressRuleParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_DRESSRULEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_DressRuleParamList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_DRESSRULEPARAMLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightEquipCategory get_EquipCategory()
		{
			return ((::RPG::GameCore::GridFightEquipCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPCATEGORY_OFFSET))(this);
		}

		::System::Void set_EquipCategory(::RPG::GameCore::GridFightEquipCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPCATEGORY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightEquipFuncType get_EquipFunc()
		{
			return ((::RPG::GameCore::GridFightEquipFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPFUNC_OFFSET))(this);
		}

		::System::Void set_EquipFunc(::RPG::GameCore::GridFightEquipFuncType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightEquipFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPFUNC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplaySpecialParam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ISDISPLAYSPECIALPARAM_OFFSET))(this);
		}

		::System::Void set_IsDisplaySpecialParam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ISDISPLAYSPECIALPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EquipDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPDESC_OFFSET))(this);
		}

		::System::Void set_EquipDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPDESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_EquipFuncParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_EQUIPFUNCPARAMLIST_OFFSET))(this);
		}

		::System::Void set_EquipFuncParamList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_EQUIPFUNCPARAMLIST_OFFSET))(this, a1);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ABILITYNAME_OFFSET))(this);
		}

		::System::Void set_AbilityName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ABILITYNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_AbilityParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ABILITYPARAMLIST_OFFSET))(this);
		}

		::System::Void set_AbilityParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_ABILITYPARAMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_GeneralPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_GENERALPROPERTYLIST_OFFSET))(this);
		}

		::System::Void set_GeneralPropertyList(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_GENERALPROPERTYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_SkillTagNames()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_SKILLTAGNAMES_OFFSET))(this);
		}

		::System::Void set_SkillTagNames(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_SKILLTAGNAMES_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CategoryName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_CATEGORYNAME_OFFSET))(this);
		}

		::System::Boolean get_ShowRecommendRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_SHOWRECOMMENDROLE_OFFSET))(this);
		}

		::System::Void set_ShowRecommendRole(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_SHOWRECOMMENDROLE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StaticRecommendRoleIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_STATICRECOMMENDROLEIDLIST_OFFSET))(this);
		}

		::System::Void set_StaticRecommendRoleIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_SET_STATICRECOMMENDROLEIDLIST_OFFSET))(this, a1);
		}

		::System::String* get_ElationDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPITEMCONFIG_GET_ELATIONDESC_OFFSET))(this);
		}
	};
}
