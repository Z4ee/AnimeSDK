#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2DF8414BF3EA990E_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1AE9E660)
#define CLASS_1_2DF8414BF3EA990E_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1AE9E6B0)
#define CLASS_1_2DF8414BF3EA990E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9E720)

inline static constexpr unsigned int Class_1_2DF8414BF3EA990E_TypeDefinitionIndex = 60813;

class Class_1_2DF8414BF3EA990E : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x0; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x0; // 0x0
	::System::Boolean Field_1_6; // 0x10
	::System::Boolean Field_1_3; // 0x11
	::System::Int32 Field_1_4; // 0x14
	::System::UInt32 Field_1_5; // 0x18
	::System::Int64 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DF8414BF3EA990E__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DF8414BF3EA990E_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DF8414BF3EA990E_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
