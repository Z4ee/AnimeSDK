#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4B83DF63BF0C0758__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD4140)

inline static constexpr unsigned int Class_1_4B83DF63BF0C0758_TypeDefinitionIndex = 34242;

class Class_1_4B83DF63BF0C0758 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B83DF63BF0C0758__CTOR_OFFSET))(this);
	}
};
