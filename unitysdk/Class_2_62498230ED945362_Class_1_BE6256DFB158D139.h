#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_62498230ED945362_CLASS_1_BE6256DFB158D139_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x12AD6910)
#define CLASS_2_62498230ED945362_CLASS_1_BE6256DFB158D139_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x12AD6920)
#define CLASS_2_62498230ED945362_CLASS_1_BE6256DFB158D139__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD6900)

inline static constexpr unsigned int Class_2_62498230ED945362_Class_1_BE6256DFB158D139_TypeDefinitionIndex = 82758;

class Class_2_62498230ED945362_Class_1_BE6256DFB158D139 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Double Field_1_7; // 0x18
	::System::Single Field_1_6; // 0x20
	::System::Double Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_CLASS_1_BE6256DFB158D139__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_CLASS_1_BE6256DFB158D139_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62498230ED945362_CLASS_1_BE6256DFB158D139_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}
};
