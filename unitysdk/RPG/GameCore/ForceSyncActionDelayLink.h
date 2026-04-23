#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCESYNCACTIONDELAYLINK_METHOD_3_1D80F065011EF6C7_OFFSET UNITYSDK_OFFSET(0x18929C30)
#define RPG_GAMECORE_FORCESYNCACTIONDELAYLINK_METHOD_3_F6DBF6FDA5913293_OFFSET UNITYSDK_OFFSET(0x18929CB0)
#define RPG_GAMECORE_FORCESYNCACTIONDELAYLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x18929C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceSyncActionDelayLink_TypeDefinitionIndex = 22244;

	class ForceSyncActionDelayLink : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LinkOwner; // 0x18
		::RPG::GameCore::TargetEvaluator* Follower; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESYNCACTIONDELAYLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D80F065011EF6C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceSyncActionDelayLink*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceSyncActionDelayLink*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESYNCACTIONDELAYLINK_METHOD_3_1D80F065011EF6C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6DBF6FDA5913293(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceSyncActionDelayLink* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceSyncActionDelayLink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCESYNCACTIONDELAYLINK_METHOD_3_F6DBF6FDA5913293_OFFSET))(a1, a2);
		}
	};
}
