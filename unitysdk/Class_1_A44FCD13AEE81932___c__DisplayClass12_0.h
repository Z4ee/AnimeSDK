#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CF32442E7A80121;
class Class_1_A44FCD13AEE81932;

#define CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E46900)
#define CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS12_0___ONBATTLEENDSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x15E478D0)
#define CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS12_0___ONBATTLEENDSCRSP_B__1_OFFSET UNITYSDK_OFFSET(0x15E47900)

inline static constexpr unsigned int Class_1_A44FCD13AEE81932___c__DisplayClass12_0_TypeDefinitionIndex = 60993;

class Class_1_A44FCD13AEE81932___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_1_6CF32442E7A80121* rsp; // 0x10
	::Class_1_A44FCD13AEE81932* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnBattleEndScRsp_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS12_0___ONBATTLEENDSCRSP_B__0_OFFSET))(this, a1);
	}

	::System::Void __OnBattleEndScRsp_b__1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS12_0___ONBATTLEENDSCRSP_B__1_OFFSET))(this, a1);
	}
};
