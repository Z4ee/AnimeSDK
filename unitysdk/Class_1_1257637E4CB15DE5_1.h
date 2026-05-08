#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C2FD185AAA4AC980.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1257637E4CB15DE5_1_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x12D93EE0)
#define CLASS_1_1257637E4CB15DE5_1_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x12D93F30)
#define CLASS_1_1257637E4CB15DE5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12D93FA0)

inline static constexpr unsigned int Class_1_1257637E4CB15DE5_1_TypeDefinitionIndex = 70106;

class Class_1_1257637E4CB15DE5_1 : public ::System::Object
{
public:
	::Struct_2_C2FD185AAA4AC980 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_1__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_1_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1257637E4CB15DE5_1_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
