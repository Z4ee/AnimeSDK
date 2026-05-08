#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_74_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xA9A9350)
#define CLASS_1_43BD383C98B4C0C5_74_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xA9A9390)
#define CLASS_1_43BD383C98B4C0C5_74__CTOR_OFFSET UNITYSDK_OFFSET(0xA9A9400)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_74_TypeDefinitionIndex = 50238;

class Class_1_43BD383C98B4C0C5_74 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_74__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_74_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_74_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
