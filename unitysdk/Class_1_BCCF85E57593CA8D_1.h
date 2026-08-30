#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BCCF85E57593CA8D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1420B0)

inline static constexpr unsigned int Class_1_BCCF85E57593CA8D_1_TypeDefinitionIndex = 35840;

class Class_1_BCCF85E57593CA8D_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PBLPLDJKPEI; // 0x10
	::System::UInt32 DHJANOFGDNP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCCF85E57593CA8D_1__CTOR_OFFSET))(this);
	}
};
