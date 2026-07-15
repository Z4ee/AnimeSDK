#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1833A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1833E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C__REFRESHISUNLOCK_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A1833F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeNode___c_TypeDefinitionIndex = 71803;

	class IdleLiveTechTreeNode___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeNode___c_TypeDefinitionIndex)->GetStaticField(0x41A80);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTechTreeNode___c_TypeDefinitionIndex)->GetStaticField(0x41A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshIsUnlock_b__3_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREENODE___C__REFRESHISUNLOCK_B__3_0_OFFSET))(this, a1);
		}
	};
}
