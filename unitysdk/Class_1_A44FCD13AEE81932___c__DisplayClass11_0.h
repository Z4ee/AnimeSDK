#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7C11C261870F1926_2;
class Class_1_A44FCD13AEE81932;

#define CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C5EEA0)
#define CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS11_0___ONBATTLEENDSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x10C5FEA0)
#define CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS11_0___ONBATTLEENDSCRSP_B__1_OFFSET UNITYSDK_OFFSET(0x10C5FED0)

inline static constexpr unsigned int Class_1_A44FCD13AEE81932___c__DisplayClass11_0_TypeDefinitionIndex = 49457;

class Class_1_A44FCD13AEE81932___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_1_A44FCD13AEE81932* __4__this; // 0x10
	::Class_1_7C11C261870F1926_2* rsp; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnBattleEndScRsp_b__0(::System::Boolean _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS11_0___ONBATTLEENDSCRSP_B__0_OFFSET))(this, _);
	}

	::System::Void __OnBattleEndScRsp_b__1(::System::Boolean _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A44FCD13AEE81932___C__DISPLAYCLASS11_0___ONBATTLEENDSCRSP_B__1_OFFSET))(this, _);
	}
};
