#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETALLROGUEPROPSTATE_METHOD_3_103B0E50F1538DF8_OFFSET UNITYSDK_OFFSET(0x1C2D1870)
#define RPG_GAMECORE_SETALLROGUEPROPSTATE_METHOD_3_F18EAAEC85933D74_OFFSET UNITYSDK_OFFSET(0x1C2D18C0)
#define RPG_GAMECORE_SETALLROGUEPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D18B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAllRoguePropState_TypeDefinitionIndex = 19698;

	class SetAllRoguePropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_103B0E50F1538DF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAllRoguePropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAllRoguePropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE_METHOD_3_103B0E50F1538DF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F18EAAEC85933D74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAllRoguePropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAllRoguePropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEPROPSTATE_METHOD_3_F18EAAEC85933D74_OFFSET))(a1, a2);
		}
	};
}
