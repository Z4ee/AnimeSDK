#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

class Class_3_AD536C0F531937C4_1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_29EF817331B140D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C4360)

inline static constexpr unsigned int Class_3_29EF817331B140D2_TypeDefinitionIndex = 37413;

class Class_3_29EF817331B140D2 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::Class_3_AD536C0F531937C4_1*>* Field_3_2; // 0x10
	::System::Int32 Field_3_1; // 0x18
	::System::Int32 Field_3_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29EF817331B140D2__CTOR_OFFSET))(this);
	}
};
