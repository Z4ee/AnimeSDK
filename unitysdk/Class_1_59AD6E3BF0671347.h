#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_59AD6E3BF0671347__CTOR_OFFSET UNITYSDK_OFFSET(0x14085790)

inline static constexpr unsigned int Class_1_59AD6E3BF0671347_TypeDefinitionIndex = 79241;

class Class_1_59AD6E3BF0671347 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59AD6E3BF0671347__CTOR_OFFSET))(this);
	}
};
