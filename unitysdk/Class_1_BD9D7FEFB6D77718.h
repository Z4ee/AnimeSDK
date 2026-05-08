#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_BD9D7FEFB6D77718_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x123EBD50)
#define CLASS_1_BD9D7FEFB6D77718_METHOD_1_C9D0123A0E55D14F_OFFSET UNITYSDK_OFFSET(0x123EBCF0)
#define CLASS_1_BD9D7FEFB6D77718__CTOR_OFFSET UNITYSDK_OFFSET(0x123EBCE0)

inline static constexpr unsigned int Class_1_BD9D7FEFB6D77718_TypeDefinitionIndex = 73720;

class Class_1_BD9D7FEFB6D77718 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9D7FEFB6D77718__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C9D0123A0E55D14F(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD9D7FEFB6D77718_METHOD_1_C9D0123A0E55D14F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD9D7FEFB6D77718_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
