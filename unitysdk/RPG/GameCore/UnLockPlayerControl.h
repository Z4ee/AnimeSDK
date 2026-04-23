#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOCKPLAYERCONTROL_METHOD_3_68BD2096583EA79C_OFFSET UNITYSDK_OFFSET(0x190E2040)
#define RPG_GAMECORE_UNLOCKPLAYERCONTROL_METHOD_3_995A8D825D1F7B2D_OFFSET UNITYSDK_OFFSET(0x190E1FC0)
#define RPG_GAMECORE_UNLOCKPLAYERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x190E2010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnLockPlayerControl_TypeDefinitionIndex = 19238;

	class UnLockPlayerControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean UnLockCameraControl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_995A8D825D1F7B2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnLockPlayerControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnLockPlayerControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL_METHOD_3_995A8D825D1F7B2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68BD2096583EA79C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnLockPlayerControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnLockPlayerControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKPLAYERCONTROL_METHOD_3_68BD2096583EA79C_OFFSET))(a1, a2);
		}
	};
}
