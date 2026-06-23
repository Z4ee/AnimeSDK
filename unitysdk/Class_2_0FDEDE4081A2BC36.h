#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98274A1A3981A020.h"
#include "unitysdk/Struct_2_5FCE2F86D710DAC0.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_0FDEDE4081A2BC36_METHOD_2_0F4885840B05315B_OFFSET UNITYSDK_OFFSET(0x1337B2A0)
#define CLASS_2_0FDEDE4081A2BC36_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1337B290)
#define CLASS_2_0FDEDE4081A2BC36_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1337B320)
#define CLASS_2_0FDEDE4081A2BC36__CTOR_OFFSET UNITYSDK_OFFSET(0x1337B280)

inline static constexpr unsigned int Class_2_0FDEDE4081A2BC36_TypeDefinitionIndex = 41580;

class Class_2_0FDEDE4081A2BC36 : public ::Class_1_98274A1A3981A020
{
public:
	::Struct_2_5FCE2F86D710DAC0 Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FDEDE4081A2BC36__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0FDEDE4081A2BC36_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_0F4885840B05315B()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FDEDE4081A2BC36_METHOD_2_0F4885840B05315B_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FDEDE4081A2BC36_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
