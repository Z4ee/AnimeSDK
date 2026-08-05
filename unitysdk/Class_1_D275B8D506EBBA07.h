#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D275B8D506EBBA07_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x13B21160)
#define CLASS_1_D275B8D506EBBA07_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x13B211E0)
#define CLASS_1_D275B8D506EBBA07__CTOR_OFFSET UNITYSDK_OFFSET(0x13B21250)

inline static constexpr unsigned int Class_1_D275B8D506EBBA07_TypeDefinitionIndex = 72251;

class Class_1_D275B8D506EBBA07 : public ::System::Object
{
public:
	::System::Nullable_1<::System::Single> Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D275B8D506EBBA07__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D275B8D506EBBA07_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D275B8D506EBBA07_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
