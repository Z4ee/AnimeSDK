#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DAE166D803C08CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8219B0)

inline static constexpr unsigned int Class_3_DAE166D803C08CEE_TypeDefinitionIndex = 83101;

class Class_3_DAE166D803C08CEE : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_2; // 0x10
	::System::UInt32 Field_3_0; // 0x18
	::System::UInt32 Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAE166D803C08CEE__CTOR_OFFSET))(this);
	}
};
