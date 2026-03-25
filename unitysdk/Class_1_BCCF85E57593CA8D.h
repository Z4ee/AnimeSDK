#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BCCF85E57593CA8D__CTOR_OFFSET UNITYSDK_OFFSET(0x16716C40)

inline static constexpr unsigned int Class_1_BCCF85E57593CA8D_TypeDefinitionIndex = 28550;

class Class_1_BCCF85E57593CA8D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x28
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCCF85E57593CA8D__CTOR_OFFSET))(this);
	}
};
