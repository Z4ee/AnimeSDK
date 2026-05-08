#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1CC8F53861C28C2;

#define CLASS_1_89120A467F7A010D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x10B2E010)
#define CLASS_1_89120A467F7A010D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10B2E000)
#define CLASS_1_89120A467F7A010D__CTOR_OFFSET UNITYSDK_OFFSET(0x10B2DFF0)

inline static constexpr unsigned int Class_1_89120A467F7A010D_TypeDefinitionIndex = 75146;

class Class_1_89120A467F7A010D : public ::System::Object
{
public:
	::Class_1_B1CC8F53861C28C2* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_B1CC8F53861C28C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1CC8F53861C28C2*))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_89120A467F7A010D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
