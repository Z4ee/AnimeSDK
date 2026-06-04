#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKPLAYERCONTROL_METHOD_3_23AF185D825B77FF_OFFSET UNITYSDK_OFFSET(0x198ACAA0)
#define RPG_GAMECORE_LOCKPLAYERCONTROL_METHOD_3_D421E47965B53706_OFFSET UNITYSDK_OFFSET(0x198ACB30)
#define RPG_GAMECORE_LOCKPLAYERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x198ACB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockPlayerControl_TypeDefinitionIndex = 19158;

	class LockPlayerControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LockCameraControl; // 0x18
		::System::Boolean LockInteractSelect; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23AF185D825B77FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockPlayerControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockPlayerControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL_METHOD_3_23AF185D825B77FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D421E47965B53706(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockPlayerControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockPlayerControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL_METHOD_3_D421E47965B53706_OFFSET))(a1, a2);
		}
	};
}
