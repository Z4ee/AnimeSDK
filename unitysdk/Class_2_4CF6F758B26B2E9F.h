#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4CF6F758B26B2E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x10FC51B0)

inline static constexpr unsigned int Class_2_4CF6F758B26B2E9F_TypeDefinitionIndex = 54737;

class Class_2_4CF6F758B26B2E9F : public ::System::EventArgs
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_4; // 0x19
	::System::Boolean Field_2_3; // 0x1A
	::System::Boolean Field_2_0; // 0x1B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CF6F758B26B2E9F__CTOR_OFFSET))(this);
	}
};
