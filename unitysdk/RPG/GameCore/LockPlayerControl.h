#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKPLAYERCONTROL_METHOD_3_C96EDD76722AA2F7_OFFSET UNITYSDK_OFFSET(0x1D210BC0)
#define RPG_GAMECORE_LOCKPLAYERCONTROL_METHOD_3_D421E47965B53706_OFFSET UNITYSDK_OFFSET(0x1D210C10)
#define RPG_GAMECORE_LOCKPLAYERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D210C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockPlayerControl_TypeDefinitionIndex = 20060;

	class LockPlayerControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LockCameraControl; // 0x18
		::System::Boolean LockInteractSelect; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C96EDD76722AA2F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockPlayerControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockPlayerControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL_METHOD_3_C96EDD76722AA2F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D421E47965B53706(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockPlayerControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockPlayerControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKPLAYERCONTROL_METHOD_3_D421E47965B53706_OFFSET))(a1, a2);
		}
	};
}
