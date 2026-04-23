#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA611230)
#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS67_0___GETHELIOBUSSKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA613D20)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule___c__DisplayClass67_0_TypeDefinitionIndex = 60466;

	class HeliobusModule___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::System::UInt32 skillID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetHeliobusSkillData_b__0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS67_0___GETHELIOBUSSKILLDATA_B__0_OFFSET))(this, x);
		}
	};
}
