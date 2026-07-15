#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ShowAttackTimeParam; }

#define CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB6AC0)
#define CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS34_0___ONUPDATEATTACKTIME_B__0_OFFSET UNITYSDK_OFFSET(0x18DBA800)

inline static constexpr unsigned int Class_1_AB817CB39E494C61___c__DisplayClass34_0_TypeDefinitionIndex = 67995;

class Class_1_AB817CB39E494C61___c__DisplayClass34_0 : public ::System::Object
{
public:
	::RPG::Client::ShowAttackTimeParam* param; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnUpdateAttackTime_b__0(::RPG::Client::ShowAttackTimeParam* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS34_0___ONUPDATEATTACKTIME_B__0_OFFSET))(this, a1);
	}
};
