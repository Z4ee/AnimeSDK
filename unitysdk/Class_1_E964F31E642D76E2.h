#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_24.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E964F31E642D76E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CB3A0)

inline static constexpr unsigned int Class_1_E964F31E642D76E2_TypeDefinitionIndex = 92633;

class Class_1_E964F31E642D76E2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_4C8453486C91E3A1_24>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E964F31E642D76E2__CTOR_OFFSET))(this);
	}
};
