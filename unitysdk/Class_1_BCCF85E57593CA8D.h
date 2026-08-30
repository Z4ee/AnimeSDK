#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BCCF85E57593CA8D__CTOR_OFFSET UNITYSDK_OFFSET(0x16234670)

inline static constexpr unsigned int Class_1_BCCF85E57593CA8D_TypeDefinitionIndex = 35799;

class Class_1_BCCF85E57593CA8D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JMGBCEPNALE; // 0x10
	::System::UInt32 HJPBAJEPAGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCCF85E57593CA8D__CTOR_OFFSET))(this);
	}
};
