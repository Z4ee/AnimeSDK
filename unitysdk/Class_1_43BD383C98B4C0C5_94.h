#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_94_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x12BD5A10)
#define CLASS_1_43BD383C98B4C0C5_94_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x12BD5A50)
#define CLASS_1_43BD383C98B4C0C5_94__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD5AC0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_94_TypeDefinitionIndex = 53706;

class Class_1_43BD383C98B4C0C5_94 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_94__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_94_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_94_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
