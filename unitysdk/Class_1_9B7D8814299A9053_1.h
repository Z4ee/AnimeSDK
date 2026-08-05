#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_679.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_1_9B7D8814299A9053_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17FA9C90)
#define CLASS_1_9B7D8814299A9053_1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x17FA9CA0)
#define CLASS_1_9B7D8814299A9053_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17FA9C80)
#define CLASS_1_9B7D8814299A9053_1_METHOD_1_F7AB163354E6802C_1_OFFSET UNITYSDK_OFFSET(0x17FA9EF0)
#define CLASS_1_9B7D8814299A9053_1_METHOD_1_F7AB163354E6802C_OFFSET UNITYSDK_OFFSET(0x17FA9D90)
#define CLASS_1_9B7D8814299A9053_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA9C70)

inline static constexpr unsigned int Class_1_9B7D8814299A9053_1_TypeDefinitionIndex = 12997;

class Class_1_9B7D8814299A9053_1 : public ::System::Object
{
public:
	::Struct_2_3E75877A2888D88A_679 Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_7* Field_1_7; // 0x20
	::System::Single Field_1_10; // 0x28
	::System::Byte Field_1_4; // 0x2C
	::System::Boolean Field_1_6; // 0x2D
	::System::Byte Field_1_5; // 0x2E
	::System::Single Field_1_11; // 0x30

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_679 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_679, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_1_9B7D8814299A9053_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B7D8814299A9053_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9B7D8814299A9053_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B7D8814299A9053_1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Single Method_1_F7AB163354E6802C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B7D8814299A9053_1_METHOD_1_F7AB163354E6802C_OFFSET))(this);
	}

	::System::Single Method_1_F7AB163354E6802C_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B7D8814299A9053_1_METHOD_1_F7AB163354E6802C_1_OFFSET))(this);
	}
};
