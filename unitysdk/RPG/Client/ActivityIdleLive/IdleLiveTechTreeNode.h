#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/IdleLiveTechTreeEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveTechTreeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_ADDNEXTNODE_OFFSET UNITYSDK_OFFSET(0xB16F410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_ADDPRENODE_OFFSET UNITYSDK_OFFSET(0xB16F360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xB16F1A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ABILITYPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB172370)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_CANACTIVATE_OFFSET UNITYSDK_OFFSET(0xB172180)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_COST_OFFSET UNITYSDK_OFFSET(0xB172260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_DESCTEXT_OFFSET UNITYSDK_OFFSET(0xB172210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB172220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_EXTRAADDPOWER_OFFSET UNITYSDK_OFFSET(0xB1722C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB1723D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ID_OFFSET UNITYSDK_OFFSET(0xB1721D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0xB171BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISBASE_OFFSET UNITYSDK_OFFSET(0xB1723B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISBIG_OFFSET UNITYSDK_OFFSET(0xB172390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB172160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xB1723F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB1721F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_NEXTNODES_OFFSET UNITYSDK_OFFSET(0xB1721B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xB172310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_POWERFACTOR_OFFSET UNITYSDK_OFFSET(0xB1722A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PRENODEIDS_OFFSET UNITYSDK_OFFSET(0xB172280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PRENODES_OFFSET UNITYSDK_OFFSET(0xB172190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PROPERTYPARAM_OFFSET UNITYSDK_OFFSET(0xB172350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB172330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_RELATEDCAPTAINTAG_OFFSET UNITYSDK_OFFSET(0xB1722F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB172240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_REFRESHISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB16FC40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_REFRESHNEXTNODESISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB16FB50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ABILITYPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB172380)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_COST_OFFSET UNITYSDK_OFFSET(0xB172270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB172230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_EXTRAADDPOWER_OFFSET UNITYSDK_OFFSET(0xB1722E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB1723E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ID_OFFSET UNITYSDK_OFFSET(0xB1721E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISBASE_OFFSET UNITYSDK_OFFSET(0xB1723C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISBIG_OFFSET UNITYSDK_OFFSET(0xB1723A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB172170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB172200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_NEXTNODES_OFFSET UNITYSDK_OFFSET(0xB1721C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PARAM_OFFSET UNITYSDK_OFFSET(0xB172320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_POWERFACTOR_OFFSET UNITYSDK_OFFSET(0xB1722B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PRENODEIDS_OFFSET UNITYSDK_OFFSET(0xB172290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PRENODES_OFFSET UNITYSDK_OFFSET(0xB1721A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PROPERTYPARAM_OFFSET UNITYSDK_OFFSET(0xB172360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB172340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_RELATEDCAPTAINTAG_OFFSET UNITYSDK_OFFSET(0xB172300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xB172250)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__CANACTIVATE_OFFSET UNITYSDK_OFFSET(0xB171E70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xB171E10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__GETDESCTEXT_OFFSET UNITYSDK_OFFSET(0xB171FC0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeNode_TypeDefinitionIndex = 70279;

	class IdleLiveTechTreeNode : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _PreNodeIDs_k__BackingField; // 0x10
		::System::String* _itemIconPath; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* _PreNodes_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* _NextNodes_k__BackingField; // 0x28
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _ExtraAddPower_k__BackingField; // 0x30
		::System::String* _IconPath_k__BackingField; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* _AbilityParamList_k__BackingField; // 0x50
		::RPG::Client::TextID _Name_k__BackingField; // 0x58
		::RPG::GameCore::IdleLiveTechTreeEffectType _Type_k__BackingField; // 0x68
		::System::UInt32 _Param_k__BackingField; // 0x6C
		::System::Double _PropertyParam_k__BackingField; // 0x70
		::System::UInt32 _ID_k__BackingField; // 0x78
		::RPG::GameCore::IdleLiveAvatarPropertyType _PropertyType_k__BackingField; // 0x7C
		::RPG::GameCore::ILBattleAvatarTag _RelatedCaptainTag_k__BackingField; // 0x80
		::System::UInt32 _Cost_k__BackingField; // 0x84
		::System::Boolean _IsBig_k__BackingField; // 0x88
		::System::Boolean _IsUnlock_k__BackingField; // 0x89
		::System::Boolean _IsBase_k__BackingField; // 0x8A
		::RPG::Client::TextID _Desc_k__BackingField; // 0x90
		::RPG::GameCore::FixPoint _PowerFactor_k__BackingField; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* Create(::RPG::GameCore::IdleLiveTechTreeRow* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*(*)(::RPG::GameCore::IdleLiveTechTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_CREATE_OFFSET))(a1);
		}

		::System::Void AddPreNode(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_ADDPRENODE_OFFSET))(this, a1);
		}

		::System::Void AddNextNode(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_ADDNEXTNODE_OFFSET))(this, a1);
		}

		::System::Void RefreshIsUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_REFRESHISUNLOCK_OFFSET))(this);
		}

		::System::Void RefreshNextNodesIsUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_REFRESHNEXTNODESISUNLOCK_OFFSET))(this);
		}

		::System::Boolean _CanActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__CANACTIVATE_OFFSET))(this);
		}

		::System::String* _GetDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE__GETDESCTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISACTIVATE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_CanActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_CANACTIVATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* get_PreNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PRENODES_OFFSET))(this);
		}

		::System::Void set_PreNodes(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PRENODES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* get_NextNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_NEXTNODES_OFFSET))(this);
		}

		::System::Void set_NextNodes(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_NEXTNODES_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_DescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_DESCTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::GameCore::IdleLiveTechTreeEffectType get_Type()
		{
			return ((::RPG::GameCore::IdleLiveTechTreeEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::IdleLiveTechTreeEffectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveTechTreeEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_COST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_PreNodeIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PRENODEIDS_OFFSET))(this);
		}

		::System::Void set_PreNodeIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PRENODEIDS_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PowerFactor()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_POWERFACTOR_OFFSET))(this);
		}

		::System::Void set_PowerFactor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_POWERFACTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_ExtraAddPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_EXTRAADDPOWER_OFFSET))(this);
		}

		::System::Void set_ExtraAddPower(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_EXTRAADDPOWER_OFFSET))(this, a1);
		}

		::RPG::GameCore::ILBattleAvatarTag get_RelatedCaptainTag()
		{
			return ((::RPG::GameCore::ILBattleAvatarTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_RELATEDCAPTAINTAG_OFFSET))(this);
		}

		::System::Void set_RelatedCaptainTag(::RPG::GameCore::ILBattleAvatarTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ILBattleAvatarTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_RELATEDCAPTAINTAG_OFFSET))(this, a1);
		}

		::System::UInt32 get_Param()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PARAM_OFFSET))(this);
		}

		::System::Void set_Param(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PARAM_OFFSET))(this, a1);
		}

		::RPG::GameCore::IdleLiveAvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::IdleLiveAvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Double get_PropertyParam()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_PROPERTYPARAM_OFFSET))(this);
		}

		::System::Void set_PropertyParam(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_PROPERTYPARAM_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_AbilityParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ABILITYPARAMLIST_OFFSET))(this);
		}

		::System::Void set_AbilityParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ABILITYPARAMLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISBIG_OFFSET))(this);
		}

		::System::Void set_IsBig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISBIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ISBASE_OFFSET))(this);
		}

		::System::Void set_IsBase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ISBASE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE_GET_ITEMICONPATH_OFFSET))(this);
		}
	};
}
