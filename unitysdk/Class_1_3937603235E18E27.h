#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9C9516EC1DA3BB28_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3937603235E18E27_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x18CBF590)
#define CLASS_1_3937603235E18E27_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18CBF5D0)
#define CLASS_1_3937603235E18E27__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBF640)

inline static constexpr unsigned int Class_1_3937603235E18E27_TypeDefinitionIndex = 72356;

class Class_1_3937603235E18E27 : public ::System::Object
{
public:
	::Struct_2_9C9516EC1DA3BB28_1 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3937603235E18E27__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3937603235E18E27_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3937603235E18E27_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
