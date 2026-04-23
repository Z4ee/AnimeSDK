#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ShowAttackTimeParam; }

#define CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129D7820)
#define CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS8_0__GETATTACKTIME_B__0_OFFSET UNITYSDK_OFFSET(0x129DD5D0)

inline static constexpr unsigned int Class_1_AB817CB39E494C61___c__DisplayClass8_0_TypeDefinitionIndex = 65626;

class Class_1_AB817CB39E494C61___c__DisplayClass8_0 : public ::System::Object
{
public:
	::System::UInt32 runtimeID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetAttackTime_b__0(::RPG::Client::ShowAttackTimeParam* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS8_0__GETATTACKTIME_B__0_OFFSET))(this, x);
	}
};
