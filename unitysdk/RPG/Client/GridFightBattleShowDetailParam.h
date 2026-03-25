#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightBattleShowDetailType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x97DC500)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_CLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x97DC580)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_DETAILTYPE_OFFSET UNITYSDK_OFFSET(0x97DC4C0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_HASCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x97DC5A0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ISBACKENDROLE_OFFSET UNITYSDK_OFFSET(0x97DC560)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ISTORIGHT_OFFSET UNITYSDK_OFFSET(0x97DC540)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x97DC520)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_UINTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x97DC4E0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_INVOKECLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x97DC5B0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x97DC510)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_CLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x97DC590)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_DETAILTYPE_OFFSET UNITYSDK_OFFSET(0x97DC4D0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ISBACKENDROLE_OFFSET UNITYSDK_OFFSET(0x97DC570)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ISTORIGHT_OFFSET UNITYSDK_OFFSET(0x97DC550)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x97DC530)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_UINTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x97DC4F0)
#define RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x97DC600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleShowDetailParam_TypeDefinitionIndex = 59182;

	class GridFightBattleShowDetailParam : public ::System::Object
	{
	public:
		::System::Action* _CloseCallback_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::UnityEngine::Transform* _Anchor_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _UintParamList_k__BackingField; // 0x28
		::System::Boolean _IsBackEndRole_k__BackingField; // 0x30
		::System::Boolean _IsToRight_k__BackingField; // 0x31
		::RPG::Client::GridFightBattleShowDetailType _DetailType_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightBattleShowDetailType get_DetailType()
		{
			return ((::RPG::Client::GridFightBattleShowDetailType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_DETAILTYPE_OFFSET))(this);
		}

		::System::Void set_DetailType(::RPG::Client::GridFightBattleShowDetailType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleShowDetailType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_DETAILTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UintParamList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_UINTPARAMLIST_OFFSET))(this);
		}

		::System::Void set_UintParamList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_UINTPARAMLIST_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_Anchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ANCHOR_OFFSET))(this);
		}

		::System::Void set_Anchor(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ANCHOR_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ROLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsToRight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ISTORIGHT_OFFSET))(this);
		}

		::System::Void set_IsToRight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ISTORIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsBackEndRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_ISBACKENDROLE_OFFSET))(this);
		}

		::System::Void set_IsBackEndRole(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_ISBACKENDROLE_OFFSET))(this, value);
		}

		::System::Action* get_CloseCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_CLOSECALLBACK_OFFSET))(this);
		}

		::System::Void set_CloseCallback(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_SET_CLOSECALLBACK_OFFSET))(this, value);
		}

		::System::Boolean get_HasCloseCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_GET_HASCLOSECALLBACK_OFFSET))(this);
		}

		::System::Void InvokeCloseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESHOWDETAILPARAM_INVOKECLOSECALLBACK_OFFSET))(this);
		}
	};
}
