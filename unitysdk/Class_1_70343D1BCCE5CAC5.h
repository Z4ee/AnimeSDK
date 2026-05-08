#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_743;
namespace System { class String; }

#define CLASS_1_70343D1BCCE5CAC5_METHOD_1_4E9CBAEE71878EF5_OFFSET UNITYSDK_OFFSET(0x16A58CD0)
#define CLASS_1_70343D1BCCE5CAC5_METHOD_1_BB5758A5B9830F9F_OFFSET UNITYSDK_OFFSET(0x16A58B00)
#define CLASS_1_70343D1BCCE5CAC5_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x16A58AF0)
#define CLASS_1_70343D1BCCE5CAC5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A58AB0)
#define CLASS_1_70343D1BCCE5CAC5__CTOR_OFFSET UNITYSDK_OFFSET(0x16A58AA0)

inline static constexpr unsigned int Class_1_70343D1BCCE5CAC5_TypeDefinitionIndex = 81546;

class Class_1_70343D1BCCE5CAC5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_743* Field_1_0; // 0x10
	::System::Double Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_743* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_743*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_70343D1BCCE5CAC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70343D1BCCE5CAC5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70343D1BCCE5CAC5_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_BB5758A5B9830F9F(::Struct_2_6CC2897B74C41026_2 a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70343D1BCCE5CAC5_METHOD_1_BB5758A5B9830F9F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4E9CBAEE71878EF5(::Struct_2_6CC2897B74C41026_2 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70343D1BCCE5CAC5_METHOD_1_4E9CBAEE71878EF5_OFFSET))(this, a1, a2);
	}
};
