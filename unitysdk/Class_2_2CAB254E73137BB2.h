#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class Class_1_105C32866538BE74;
namespace System { class String; }

#define CLASS_2_2CAB254E73137BB2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0E2E60)
#define CLASS_2_2CAB254E73137BB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F6E60)

inline static constexpr unsigned int Class_2_2CAB254E73137BB2_TypeDefinitionIndex = 41502;

class Class_2_2CAB254E73137BB2 : public ::System::Exception
{
public:
	::Class_1_105C32866538BE74* Field_2_0; // 0x88

	::System::Void _ctor(::Class_1_105C32866538BE74* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105C32866538BE74*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CAB254E73137BB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_105C32866538BE74* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105C32866538BE74*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_2CAB254E73137BB2__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
