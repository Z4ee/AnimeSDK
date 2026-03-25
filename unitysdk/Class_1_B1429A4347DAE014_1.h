#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_B1429A4347DAE014_1_METHOD_1_76CE385B21223156_OFFSET UNITYSDK_OFFSET(0x16B63570)
#define CLASS_1_B1429A4347DAE014_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16B636A0)

inline static constexpr unsigned int Class_1_B1429A4347DAE014_1_TypeDefinitionIndex = 10856;

class Class_1_B1429A4347DAE014_1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1429A4347DAE014_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_76CE385B21223156(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B1429A4347DAE014_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B1429A4347DAE014_1*&))((::PBYTE)hIl2Cpp + CLASS_1_B1429A4347DAE014_1_METHOD_1_76CE385B21223156_OFFSET))(a1, a2);
	}
};
