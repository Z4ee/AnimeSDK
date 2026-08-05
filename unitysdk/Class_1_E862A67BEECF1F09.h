#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_799;
namespace System { class String; }

#define CLASS_1_E862A67BEECF1F09_METHOD_1_180D00B449442F5A_OFFSET UNITYSDK_OFFSET(0x1276CB10)
#define CLASS_1_E862A67BEECF1F09_METHOD_1_9C1F4E8909BCD21E_OFFSET UNITYSDK_OFFSET(0x1276CCF0)
#define CLASS_1_E862A67BEECF1F09_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1276CCE0)
#define CLASS_1_E862A67BEECF1F09_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1276CAD0)
#define CLASS_1_E862A67BEECF1F09__CTOR_OFFSET UNITYSDK_OFFSET(0x1276CAC0)

inline static constexpr unsigned int Class_1_E862A67BEECF1F09_TypeDefinitionIndex = 82278;

class Class_1_E862A67BEECF1F09 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_799* Field_1_2; // 0x10
	::System::Double Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_799* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_799*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_E862A67BEECF1F09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E862A67BEECF1F09_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_180D00B449442F5A(::Struct_2_6CC2897B74C41026 a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E862A67BEECF1F09_METHOD_1_180D00B449442F5A_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E862A67BEECF1F09_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_9C1F4E8909BCD21E(::Struct_2_6CC2897B74C41026 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E862A67BEECF1F09_METHOD_1_9C1F4E8909BCD21E_OFFSET))(this, a1, a2);
	}
};
