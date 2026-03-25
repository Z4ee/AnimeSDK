#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_METHOD_3_1429C3FF32348E7A_OFFSET UNITYSDK_OFFSET(0x16F2AAC0)
#define RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_METHOD_3_96F495DD97951803_OFFSET UNITYSDK_OFFSET(0x16F2AA40)
#define RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2AA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDisablePlayerLockTarget_TypeDefinitionIndex = 18868;

	class AdvDisablePlayerLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96F495DD97951803(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDisablePlayerLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDisablePlayerLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_METHOD_3_96F495DD97951803_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1429C3FF32348E7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDisablePlayerLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDisablePlayerLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDISABLEPLAYERLOCKTARGET_METHOD_3_1429C3FF32348E7A_OFFSET))(a1, a2);
		}
	};
}
