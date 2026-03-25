#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6B2A863B9098DC27__CTOR_OFFSET UNITYSDK_OFFSET(0x167124B0)

inline static constexpr unsigned int Class_1_6B2A863B9098DC27_TypeDefinitionIndex = 28572;

class Class_1_6B2A863B9098DC27 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B2A863B9098DC27__CTOR_OFFSET))(this);
	}
};
