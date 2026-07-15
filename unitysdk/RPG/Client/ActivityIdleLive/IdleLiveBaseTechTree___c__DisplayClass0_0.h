#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__DISPLAYCLASS0_0__CREATE_B__2_OFFSET UNITYSDK_OFFSET(0x19D36960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D35C50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTechTree___c__DisplayClass0_0_TypeDefinitionIndex = 71793;

	class IdleLiveBaseTechTree___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* __9__2; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*>* nodeDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* _Create_b__2(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETECHTREE___C__DISPLAYCLASS0_0__CREATE_B__2_OFFSET))(this, a1);
		}
	};
}
