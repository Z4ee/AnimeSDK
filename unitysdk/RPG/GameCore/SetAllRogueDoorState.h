#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETALLROGUEDOORSTATE_METHOD_3_95F7C5A0BC179D87_OFFSET UNITYSDK_OFFSET(0x18E08C80)
#define RPG_GAMECORE_SETALLROGUEDOORSTATE_METHOD_3_E1DD5EB2AFEBD450_OFFSET UNITYSDK_OFFSET(0x18E08C10)
#define RPG_GAMECORE_SETALLROGUEDOORSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E08C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAllRogueDoorState_TypeDefinitionIndex = 19436;

	class SetAllRogueDoorState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEDOORSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1DD5EB2AFEBD450(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAllRogueDoorState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAllRogueDoorState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEDOORSTATE_METHOD_3_E1DD5EB2AFEBD450_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95F7C5A0BC179D87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAllRogueDoorState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAllRogueDoorState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLROGUEDOORSTATE_METHOD_3_95F7C5A0BC179D87_OFFSET))(a1, a2);
		}
	};
}
