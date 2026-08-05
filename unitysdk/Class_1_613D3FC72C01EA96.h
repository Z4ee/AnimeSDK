#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_42E99B6238AA7291_2;
class Class_3_42E99B6238AA7291_3;
namespace System { class String; }

#define CLASS_1_613D3FC72C01EA96__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16ACED40)
#define CLASS_1_613D3FC72C01EA96__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACED10)

inline static constexpr unsigned int Class_1_613D3FC72C01EA96_TypeDefinitionIndex = 50746;

class Class_1_613D3FC72C01EA96 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::UInt32 Field_1_7; // 0x1C

	::System::Void _ctor(::Class_3_42E99B6238AA7291_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_42E99B6238AA7291_2*))((::PBYTE)hIl2Cpp + CLASS_1_613D3FC72C01EA96__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_42E99B6238AA7291_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_42E99B6238AA7291_3*))((::PBYTE)hIl2Cpp + CLASS_1_613D3FC72C01EA96__CTOR_1_OFFSET))(this, a1);
	}
};
