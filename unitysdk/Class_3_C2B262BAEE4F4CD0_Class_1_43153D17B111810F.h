#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_43153D17B111810F_METHOD_1_AB640961F167C1D2_OFFSET UNITYSDK_OFFSET(0x1224EDE0)
#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_43153D17B111810F__CTOR_OFFSET UNITYSDK_OFFSET(0x1220BC50)

inline static constexpr unsigned int Class_3_C2B262BAEE4F4CD0_Class_1_43153D17B111810F_TypeDefinitionIndex = 79100;

class Class_3_C2B262BAEE4F4CD0_Class_1_43153D17B111810F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_43153D17B111810F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_AB640961F167C1D2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_43153D17B111810F_METHOD_1_AB640961F167C1D2_OFFSET))(this, a1);
	}
};
