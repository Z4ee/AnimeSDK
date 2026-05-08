#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_034A90EB371EBBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x10C07EA0)

inline static constexpr unsigned int Class_1_034A90EB371EBBA7_TypeDefinitionIndex = 63344;

class Class_1_034A90EB371EBBA7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_034A90EB371EBBA7__CTOR_OFFSET))(this, a1);
	}
};
