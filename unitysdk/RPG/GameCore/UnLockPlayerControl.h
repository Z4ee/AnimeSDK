#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOCKPLAYERCONTROL_METHOD_3_68BD2096583EA79C_OFFSET UNITYSDK_OFFSET(0x1B87F510)
#define RPG_GAMECORE_UNLOCKPLAYERCONTROL_METHOD_3_9DEC67959DDD1517_OFFSET UNITYSDK_OFFSET(0x1B87F4C0)
#define RPG_GAMECORE_UNLOCKPLAYERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87F500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnLockPlayerControl_TypeDefinitionIndex = 19515;

	class UnLockPlayerControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean UnLockCameraControl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DEC67959DDD1517(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnLockPlayerControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnLockPlayerControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL_METHOD_3_9DEC67959DDD1517_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68BD2096583EA79C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnLockPlayerControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnLockPlayerControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL_METHOD_3_68BD2096583EA79C_OFFSET))(a1, a2);
		}
	};
}
