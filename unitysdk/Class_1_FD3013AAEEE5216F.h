#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1269;
class Class_0_16E4307DCC419505_1284;
class Class_0_16E4307DCC419505_1290;
class Class_0_16E4307DCC419505_1300;
class Class_1_5033CCABAB033D26;
class Class_1_C85C4DAB350DD5FC_2;
class Class_1_F248B058F5A06B98;
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define CLASS_1_FD3013AAEEE5216F_METHOD_1_6E0204636745834F_OFFSET UNITYSDK_OFFSET(0x170B1830)
#define CLASS_1_FD3013AAEEE5216F__CTOR_OFFSET UNITYSDK_OFFSET(0x170B1810)

inline static constexpr unsigned int Class_1_FD3013AAEEE5216F_TypeDefinitionIndex = 76199;

class Class_1_FD3013AAEEE5216F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1300* Field_1_0; // 0x10
	::Class_1_5033CCABAB033D26* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_1269* Field_1_2; // 0x20
	::Class_1_F248B058F5A06B98* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_1290* Field_1_4; // 0x30
	::Class_0_16E4307DCC419505_1284* Field_1_5; // 0x38

	::System::Void _ctor(::Class_0_16E4307DCC419505_1290* a1, ::Class_1_F248B058F5A06B98* a2, ::Class_0_16E4307DCC419505_1284* a3, ::Class_0_16E4307DCC419505_1269* a4, ::Class_0_16E4307DCC419505_1300* a5, ::Class_1_5033CCABAB033D26* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1290*, ::Class_1_F248B058F5A06B98*, ::Class_0_16E4307DCC419505_1284*, ::Class_0_16E4307DCC419505_1269*, ::Class_0_16E4307DCC419505_1300*, ::Class_1_5033CCABAB033D26*))((::PBYTE)hIl2Cpp + CLASS_1_FD3013AAEEE5216F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* Method_1_6E0204636745834F(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_FD3013AAEEE5216F_METHOD_1_6E0204636745834F_OFFSET))(this, a1);
	}
};
