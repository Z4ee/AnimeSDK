#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3D46C5D064952E16_2.h"

class Class_2_1B1C05BC0A38A2D5_1;
namespace System { class String; }

#define CLASS_2_00F9F9FBFFCA5B51_METHOD_2_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x113F4D70)
#define CLASS_2_00F9F9FBFFCA5B51_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x113F4E00)
#define CLASS_2_00F9F9FBFFCA5B51__CTOR_OFFSET UNITYSDK_OFFSET(0x113F4D60)

inline static constexpr unsigned int Class_2_00F9F9FBFFCA5B51_TypeDefinitionIndex = 56753;

class Class_2_00F9F9FBFFCA5B51 : public ::Class_1_3D46C5D064952E16_2
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor(::Class_2_1B1C05BC0A38A2D5_1* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1B1C05BC0A38A2D5_1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_00F9F9FBFFCA5B51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00F9F9FBFFCA5B51_METHOD_2_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00F9F9FBFFCA5B51_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}
};
