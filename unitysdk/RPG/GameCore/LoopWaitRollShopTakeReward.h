#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_METHOD_3_174EFCFB42E0AA3B_OFFSET UNITYSDK_OFFSET(0x18A7ECE0)
#define RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_METHOD_3_3489B974DCB0696B_OFFSET UNITYSDK_OFFSET(0x18A7EC50)
#define RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7ECB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitRollShopTakeReward_TypeDefinitionIndex = 20188;

	class LoopWaitRollShopTakeReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3489B974DCB0696B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRollShopTakeReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRollShopTakeReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_METHOD_3_3489B974DCB0696B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_174EFCFB42E0AA3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRollShopTakeReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRollShopTakeReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPTAKEREWARD_METHOD_3_174EFCFB42E0AA3B_OFFSET))(a1, a2);
		}
	};
}
