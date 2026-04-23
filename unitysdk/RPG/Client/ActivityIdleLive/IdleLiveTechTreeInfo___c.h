#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAdvTechTree; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BD6320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD6350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__GETALLACTIVATENODES_B__9_0_OFFSET UNITYSDK_OFFSET(0x9BD6380)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__GETPOWERFACTOR_B__17_1_OFFSET UNITYSDK_OFFSET(0x9BD6510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__HASANYACTIVATEDNODE_B__12_0_OFFSET UNITYSDK_OFFSET(0x9BD64F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__HASANYIDLELIVETECHTREECANACTIVATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x9BD6490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x9BD6360)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeInfo___c_TypeDefinitionIndex = 69464;

	class IdleLiveTechTreeInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x31330);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x31338);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x31340);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::RPG::GameCore::FixPoint>** StaticGet___9__17_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x31348);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x31350);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeInfo___c_TypeDefinitionIndex)->GetStaticField(0x31358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__1_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__INIT_B__1_0_OFFSET))(this, node);
		}

		::System::Boolean _GetAllActivateNodes_b__9_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__GETALLACTIVATENODES_B__9_0_OFFSET))(this, node);
		}

		::System::Boolean _HasAnyIdleLiveTechTreeCanActivate_b__11_0(::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree* tree)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAdvTechTree*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__HASANYIDLELIVETECHTREECANACTIVATE_B__11_0_OFFSET))(this, tree);
		}

		::System::Boolean _HasAnyActivatedNode_b__12_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__HASANYACTIVATEDNODE_B__12_0_OFFSET))(this, node);
		}

		::RPG::GameCore::FixPoint _GetPowerFactor_b__17_1(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* x)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__GETPOWERFACTOR_B__17_1_OFFSET))(this, x);
		}
	};
}
