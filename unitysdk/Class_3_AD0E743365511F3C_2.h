#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

class Class_3_29EF817331B140D2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AD0E743365511F3C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52E2B0)

inline static constexpr unsigned int Class_3_AD0E743365511F3C_2_TypeDefinitionIndex = 35817;

class Class_3_AD0E743365511F3C_2 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::Collections::Generic::List_1<::Class_3_29EF817331B140D2*>* Field_3_1; // 0x10
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD0E743365511F3C_2__CTOR_OFFSET))(this);
	}
};
