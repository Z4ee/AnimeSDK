#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40B7FA2256AD419F.h"

#define CLASS_3_2BB6ED8653FA760C_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x7170680)
#define CLASS_3_2BB6ED8653FA760C_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x7170660)
#define CLASS_3_2BB6ED8653FA760C_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x7170670)
#define CLASS_3_2BB6ED8653FA760C_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7170650)
#define CLASS_3_2BB6ED8653FA760C__CTOR_OFFSET UNITYSDK_OFFSET(0x7170690)

inline static constexpr unsigned int Class_3_2BB6ED8653FA760C_TypeDefinitionIndex = 41101;

class Class_3_2BB6ED8653FA760C : public ::Class_2_40B7FA2256AD419F
{
public:
	::System::Boolean Field_3_1; // 0x70
	::System::Boolean Field_3_0; // 0x71

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BB6ED8653FA760C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BB6ED8653FA760C_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2BB6ED8653FA760C_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BB6ED8653FA760C_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2BB6ED8653FA760C_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}
};
