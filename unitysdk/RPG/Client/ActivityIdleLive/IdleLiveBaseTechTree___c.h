#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTechTreeRow; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D36700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x19D36740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CREATE_B__0_1_OFFSET UNITYSDK_OFFSET(0x19D36760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D36730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__GETFIRSTREACHROWINDEX_B__3_0_OFFSET UNITYSDK_OFFSET(0x19D36790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__HASANYIDLELIVETECHTREECANACTIVATE_B__5_0_OFFSET UNITYSDK_OFFSET(0x19D36910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__ISALLNODEACTIVATED_B__4_0_OFFSET UNITYSDK_OFFSET(0x19D367C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__ISALLNODEACTIVATED_B__4_1_OFFSET UNITYSDK_OFFSET(0x19D368F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTechTree___c_TypeDefinitionIndex = 71792;

	class IdleLiveBaseTechTree___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x3C650);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x3C658);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x3C660);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTree___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x3C668);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x3C670);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x3C678);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveBaseTechTree___c_TypeDefinitionIndex)->GetStaticField(0x3C680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__0_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CREATE_B__0_0_OFFSET))(this, a1);
		}

		::System::Boolean _Create_b__0_1(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__CREATE_B__0_1_OFFSET))(this, a1);
		}

		::System::Boolean _GetFirstReachRowIndex_b__3_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__GETFIRSTREACHROWINDEX_B__3_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllNodeActivated_b__4_0(::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTechTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__ISALLNODEACTIVATED_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllNodeActivated_b__4_1(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__ISALLNODEACTIVATED_B__4_1_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyIdleLiveTechTreeCanActivate_b__5_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__HASANYIDLELIVETECHTREECANACTIVATE_B__5_0_OFFSET))(this, a1);
		}
	};
}
