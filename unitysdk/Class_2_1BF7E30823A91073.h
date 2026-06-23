#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30B1A66D08531163.h"

class Class_1_D375C91CCE5D3999;

#define CLASS_2_1BF7E30823A91073_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14A932D0)
#define CLASS_2_1BF7E30823A91073_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x14A93090)
#define CLASS_2_1BF7E30823A91073__CTOR_OFFSET UNITYSDK_OFFSET(0x14A92F90)

inline static constexpr unsigned int Class_2_1BF7E30823A91073_TypeDefinitionIndex = 76313;

class Class_2_1BF7E30823A91073 : public ::Class_1_30B1A66D08531163
{
public:
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_D375C91CCE5D3999* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1BF7E30823A91073__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BF7E30823A91073_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BF7E30823A91073_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
