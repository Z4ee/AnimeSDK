#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ShowAttackTimeParam; }

#define CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48AE10)
#define CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS35_0___ONUPDATEATTACKTIME_B__0_OFFSET UNITYSDK_OFFSET(0x1A48EB80)

inline static constexpr unsigned int Class_1_AB817CB39E494C61___c__DisplayClass35_0_TypeDefinitionIndex = 71168;

class Class_1_AB817CB39E494C61___c__DisplayClass35_0 : public ::System::Object
{
public:
	::RPG::Client::ShowAttackTimeParam* param; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnUpdateAttackTime_b__0(::RPG::Client::ShowAttackTimeParam* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__DISPLAYCLASS35_0___ONUPDATEATTACKTIME_B__0_OFFSET))(this, a1);
	}
};
