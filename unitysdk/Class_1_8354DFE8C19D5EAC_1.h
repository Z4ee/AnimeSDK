#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8354DFE8C19D5EAC_1_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x159985F0)
#define CLASS_1_8354DFE8C19D5EAC_1_METHOD_1_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x15998640)
#define CLASS_1_8354DFE8C19D5EAC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15998570)

inline static constexpr unsigned int Class_1_8354DFE8C19D5EAC_1_TypeDefinitionIndex = 61567;

class Class_1_8354DFE8C19D5EAC_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8354DFE8C19D5EAC_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8354DFE8C19D5EAC_1__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8354DFE8C19D5EAC_1_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_8354DFE8C19D5EAC_1* Method_1_98FE8344617B99D4(::Class_1_8354DFE8C19D5EAC_1* a1)
	{
		return ((::Class_1_8354DFE8C19D5EAC_1*(*)(::PVOID, ::Class_1_8354DFE8C19D5EAC_1*))((::PBYTE)hIl2Cpp + CLASS_1_8354DFE8C19D5EAC_1_METHOD_1_98FE8344617B99D4_OFFSET))(this, a1);
	}
};
