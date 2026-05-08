#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_711;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_2_CE94D30DB10ECE36;

#define CLASS_1_4C889EC107CAF83A__CTOR_OFFSET UNITYSDK_OFFSET(0x11BB8120)

inline static constexpr unsigned int Class_1_4C889EC107CAF83A_TypeDefinitionIndex = 80322;

class Class_1_4C889EC107CAF83A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::Class_0_16E4307DCC419505_711*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C889EC107CAF83A__CTOR_OFFSET))(this);
	}
};
