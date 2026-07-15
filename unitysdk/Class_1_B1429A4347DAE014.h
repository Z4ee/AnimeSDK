#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_B1429A4347DAE014_METHOD_1_76CE385B21223156_OFFSET UNITYSDK_OFFSET(0x1BE9C970)
#define CLASS_1_B1429A4347DAE014__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9CAA0)

inline static constexpr unsigned int Class_1_B1429A4347DAE014_TypeDefinitionIndex = 11219;

class Class_1_B1429A4347DAE014 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1429A4347DAE014__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_76CE385B21223156(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B1429A4347DAE014*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B1429A4347DAE014*&))((::PBYTE)hIl2Cpp + CLASS_1_B1429A4347DAE014_METHOD_1_76CE385B21223156_OFFSET))(a1, a2);
	}
};
