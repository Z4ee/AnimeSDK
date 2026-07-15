#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAdvTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A182950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A182980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__GETALLACTIVATENODES_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A1829B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__GETPOWERFACTOR_B__17_1_OFFSET UNITYSDK_OFFSET(0x1A182B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__HASANYACTIVATEDNODE_B__12_0_OFFSET UNITYSDK_OFFSET(0x1A182B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__HASANYIDLELIVETECHTREECANACTIVATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1A182AC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A182990)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeInfo___c_TypeDefinitionIndex = 71799;

	class IdleLiveTechTreeInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x418F0);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x418F8);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x41900);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x41908);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::RPG::GameCore::FixPoint>** StaticGet___9__17_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x41910);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x41918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__1_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__INIT_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllActivateNodes_b__9_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__GETALLACTIVATENODES_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyIdleLiveTechTreeCanActivate_b__11_0(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__HASANYIDLELIVETECHTREECANACTIVATE_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyActivatedNode_b__12_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__HASANYACTIVATEDNODE_B__12_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint _GetPowerFactor_b__17_1(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__GETPOWERFACTOR_B__17_1_OFFSET))(this, a1);
		}
	};
}
