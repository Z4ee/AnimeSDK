#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_25.h"
#include "unitysdk/Enum_3_D3384FC764485EA3.h"
#include "unitysdk/Enum_3_DFAB710952674332.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FF13DDC3E6877E63__CTOR_OFFSET UNITYSDK_OFFSET(0xFE6C120)

inline static constexpr unsigned int Class_1_FF13DDC3E6877E63_TypeDefinitionIndex = 59186;

class Class_1_FF13DDC3E6877E63 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* Field_1_1; // 0x10
	::Class_2_01B22E9930E7BB4D* Field_1_0; // 0x18
	::Enum_3_D3384FC764485EA3 Field_1_3; // 0x20
	::Enum_3_4608E37A1B3D374A_25 Field_1_4; // 0x24
	::Enum_3_DFAB710952674332 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF13DDC3E6877E63__CTOR_OFFSET))(this);
	}
};
