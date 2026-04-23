#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTechTreeRow; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B3A300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x9B3A340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CREATE_B__0_1_OFFSET UNITYSDK_OFFSET(0x9B3A360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3A330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__GETFIRSTREACHROWINDEX_B__3_0_OFFSET UNITYSDK_OFFSET(0x9B3A390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__HASANYIDLELIVETECHTREECANACTIVATE_B__5_0_OFFSET UNITYSDK_OFFSET(0x9B3A4E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__ISALLNODEACTIVATED_B__4_0_OFFSET UNITYSDK_OFFSET(0x9B3A3C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__ISALLNODEACTIVATED_B__4_1_OFFSET UNITYSDK_OFFSET(0x9B3A4C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTechTree___c_TypeDefinitionIndex = 69457;

	class IdleLiveBaseTechTree___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x29710);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x29718);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x29720);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x29728);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x29730);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x29738);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x29740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__0_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* n)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CREATE_B__0_0_OFFSET))(this, n);
		}

		::System::Boolean _Create_b__0_1(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CREATE_B__0_1_OFFSET))(this, n);
		}

		::System::Boolean _GetFirstReachRowIndex_b__3_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__GETFIRSTREACHROWINDEX_B__3_0_OFFSET))(this, node);
		}

		::System::Boolean _IsAllNodeActivated_b__4_0(::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__ISALLNODEACTIVATED_B__4_0_OFFSET))(this, row);
		}

		::System::Boolean _IsAllNodeActivated_b__4_1(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__ISALLNODEACTIVATED_B__4_1_OFFSET))(this, node);
		}

		::System::Boolean _HasAnyIdleLiveTechTreeCanActivate_b__5_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__HASANYIDLELIVETECHTREECANACTIVATE_B__5_0_OFFSET))(this, node);
		}
	};
}
