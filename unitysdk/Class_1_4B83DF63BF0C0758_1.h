#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4B83DF63BF0C0758_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13769100)

inline static constexpr unsigned int Class_1_4B83DF63BF0C0758_1_TypeDefinitionIndex = 74309;

class Class_1_4B83DF63BF0C0758_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::UInt32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B83DF63BF0C0758_1__CTOR_OFFSET))(this);
	}
};
