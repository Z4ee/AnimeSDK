#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHESTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B3E5F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHESTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3E630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHESTDATA___C__GETBATCHOPENSIZE_B__41_0_OFFSET UNITYSDK_OFFSET(0x9B3E660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHESTDATA___C__ISAUTOCHESTOPENUNLOCKED_B__40_0_OFFSET UNITYSDK_OFFSET(0x9B3E640)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChestData___c_TypeDefinitionIndex = 69227;

	class IdleLiveChestData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveChestData___c_TypeDefinitionIndex)->GetStaticField(0x29B90);
		}
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveChestData___c_TypeDefinitionIndex)->GetStaticField(0x29B98);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveChestData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveChestData___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveChestData___c_TypeDefinitionIndex)->GetStaticField(0x29BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHESTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHESTDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _IsAutoChestOpenUnlocked_b__40_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHESTDATA___C__ISAUTOCHESTOPENUNLOCKED_B__40_0_OFFSET))(this, node);
		}

		::System::UInt32 _GetBatchOpenSize_b__41_0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* node)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHESTDATA___C__GETBATCHOPENSIZE_B__41_0_OFFSET))(this, node);
		}
	};
}
