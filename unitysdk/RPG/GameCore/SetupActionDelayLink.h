#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETUPACTIONDELAYLINK_METHOD_3_41470E85B2C97C30_OFFSET UNITYSDK_OFFSET(0x19C69840)
#define RPG_GAMECORE_SETUPACTIONDELAYLINK_METHOD_3_47E0FE9C4640EF3F_OFFSET UNITYSDK_OFFSET(0x19C697C0)
#define RPG_GAMECORE_SETUPACTIONDELAYLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x19C69810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupActionDelayLink_TypeDefinitionIndex = 22002;

	class SetupActionDelayLink : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LinkOwner; // 0x18
		::RPG::GameCore::TargetEvaluator* Follower; // 0x20
		::System::Int32 OrderInLink; // 0x28
		::System::Boolean IsInit; // 0x2C
		::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* LinkOwnerExtraBehavior; // 0x30
		::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* FollowerExtraBehavior; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPACTIONDELAYLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_47E0FE9C4640EF3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupActionDelayLink*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupActionDelayLink*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPACTIONDELAYLINK_METHOD_3_47E0FE9C4640EF3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_41470E85B2C97C30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetupActionDelayLink* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetupActionDelayLink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPACTIONDELAYLINK_METHOD_3_41470E85B2C97C30_OFFSET))(a1, a2);
		}
	};
}
