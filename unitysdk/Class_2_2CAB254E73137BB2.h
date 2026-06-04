#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class Class_1_60B5E5A0CB5606E4;
namespace System { class String; }

#define CLASS_2_2CAB254E73137BB2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC31930)
#define CLASS_2_2CAB254E73137BB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC43510)

inline static constexpr unsigned int Class_2_2CAB254E73137BB2_TypeDefinitionIndex = 40687;

class Class_2_2CAB254E73137BB2 : public ::System::Exception
{
public:
	::Class_1_60B5E5A0CB5606E4* Field_2_0; // 0x88

	::System::Void _ctor(::Class_1_60B5E5A0CB5606E4* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CAB254E73137BB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_60B5E5A0CB5606E4* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_2CAB254E73137BB2__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
