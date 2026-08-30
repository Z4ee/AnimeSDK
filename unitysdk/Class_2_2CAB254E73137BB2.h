#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class Class_1_F3CAAE7E7C7111CC;
namespace System { class String; }

#define CLASS_2_2CAB254E73137BB2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B36C0)
#define CLASS_2_2CAB254E73137BB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8690)

inline static constexpr unsigned int Class_2_2CAB254E73137BB2_TypeDefinitionIndex = 42497;

class Class_2_2CAB254E73137BB2 : public ::System::Exception
{
public:
	::Class_1_F3CAAE7E7C7111CC* LEGIJJHDDBI; // 0x88

	::System::Void _ctor(::Class_1_F3CAAE7E7C7111CC* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2CAB254E73137BB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_F3CAAE7E7C7111CC* a1, ::System::String* a2, ::System::Exception* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_2CAB254E73137BB2__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
