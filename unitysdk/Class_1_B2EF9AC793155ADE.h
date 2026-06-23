#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B2EF9AC793155ADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1010B3D0)

inline static constexpr unsigned int Class_1_B2EF9AC793155ADE_TypeDefinitionIndex = 75209;

class Class_1_B2EF9AC793155ADE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2EF9AC793155ADE__CTOR_OFFSET))(this);
	}
};
