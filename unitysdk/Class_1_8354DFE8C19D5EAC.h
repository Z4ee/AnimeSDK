#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8354DFE8C19D5EAC_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xDB77D20)
#define CLASS_1_8354DFE8C19D5EAC_METHOD_1_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0xDB77D70)
#define CLASS_1_8354DFE8C19D5EAC__CTOR_OFFSET UNITYSDK_OFFSET(0xDB77CA0)

inline static constexpr unsigned int Class_1_8354DFE8C19D5EAC_TypeDefinitionIndex = 39380;

class Class_1_8354DFE8C19D5EAC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8354DFE8C19D5EAC*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8354DFE8C19D5EAC__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8354DFE8C19D5EAC_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_8354DFE8C19D5EAC* Method_1_98FE8344617B99D4(::Class_1_8354DFE8C19D5EAC* a1)
	{
		return ((::Class_1_8354DFE8C19D5EAC*(*)(::PVOID, ::Class_1_8354DFE8C19D5EAC*))((::PBYTE)hIl2Cpp + CLASS_1_8354DFE8C19D5EAC_METHOD_1_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
