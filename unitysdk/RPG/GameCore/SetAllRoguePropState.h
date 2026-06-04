#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETALLROGUEPROPSTATE_METHOD_3_DDCA240129EAA9B4_OFFSET UNITYSDK_OFFSET(0x19C27D80)
#define RPG_GAMECORE_SETALLROGUEPROPSTATE_METHOD_3_F18EAAEC85933D74_OFFSET UNITYSDK_OFFSET(0x19C27E10)
#define RPG_GAMECORE_SETALLROGUEPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C27DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAllRoguePropState_TypeDefinitionIndex = 19342;

	class SetAllRoguePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDCA240129EAA9B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAllRoguePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAllRoguePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE_METHOD_3_DDCA240129EAA9B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F18EAAEC85933D74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAllRoguePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAllRoguePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE_METHOD_3_F18EAAEC85933D74_OFFSET))(a1, a2);
		}
	};
}
