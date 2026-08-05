#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98274A1A3981A020_1.h"
#include "unitysdk/Struct_2_5FCE2F86D710DAC0.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_0FDEDE4081A2BC36_METHOD_2_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x128D79E0)
#define CLASS_2_0FDEDE4081A2BC36_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x128D79D0)
#define CLASS_2_0FDEDE4081A2BC36_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x128D79C0)
#define CLASS_2_0FDEDE4081A2BC36__CTOR_OFFSET UNITYSDK_OFFSET(0x128D79B0)

inline static constexpr unsigned int Class_2_0FDEDE4081A2BC36_TypeDefinitionIndex = 42506;

class Class_2_0FDEDE4081A2BC36 : public ::Class_1_98274A1A3981A020_1
{
public:
	::Struct_2_5FCE2F86D710DAC0 Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FDEDE4081A2BC36__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FDEDE4081A2BC36_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0FDEDE4081A2BC36_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FDEDE4081A2BC36_METHOD_2_0F4885840B05315B_OFFSET))(this);
	}
};
