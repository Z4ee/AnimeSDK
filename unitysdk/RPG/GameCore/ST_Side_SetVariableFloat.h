#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_SETVARIABLEFLOAT_METHOD_4_8BCECC042922D9FD_OFFSET UNITYSDK_OFFSET(0x1768FE40)
#define RPG_GAMECORE_ST_SIDE_SETVARIABLEFLOAT_METHOD_4_BEE4A87945D4C5F5_OFFSET UNITYSDK_OFFSET(0x17699F30)
#define RPG_GAMECORE_ST_SIDE_SETVARIABLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1768FDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_SetVariableFloat_TypeDefinitionIndex = 18391;

	class ST_Side_SetVariableFloat : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean OnEnter; // 0x18
		::System::String* EnterName; // 0x20
		::System::Single EnterValue; // 0x28
		::System::Boolean OnExit; // 0x2C
		::System::String* ExitName; // 0x30
		::System::Single ExitValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETVARIABLEFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BEE4A87945D4C5F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SetVariableFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SetVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETVARIABLEFLOAT_METHOD_4_BEE4A87945D4C5F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8BCECC042922D9FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_SetVariableFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_SetVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_SETVARIABLEFLOAT_METHOD_4_8BCECC042922D9FD_OFFSET))(a1, a2);
		}
	};
}
