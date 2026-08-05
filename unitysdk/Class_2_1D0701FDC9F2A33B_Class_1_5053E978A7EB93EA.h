#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1D0701FDC9F2A33B;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1D0701FDC9F2A33B_CLASS_1_5053E978A7EB93EA_METHOD_1_E894622E598E411A_OFFSET UNITYSDK_OFFSET(0x12F40C80)
#define CLASS_2_1D0701FDC9F2A33B_CLASS_1_5053E978A7EB93EA__CTOR_OFFSET UNITYSDK_OFFSET(0x12F40C70)

inline static constexpr unsigned int Class_2_1D0701FDC9F2A33B_Class_1_5053E978A7EB93EA_TypeDefinitionIndex = 83912;

class Class_2_1D0701FDC9F2A33B_Class_1_5053E978A7EB93EA : public ::System::Object
{
public:
	::Class_2_1D0701FDC9F2A33B* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::Action*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D0701FDC9F2A33B_CLASS_1_5053E978A7EB93EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E894622E598E411A(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_1D0701FDC9F2A33B_CLASS_1_5053E978A7EB93EA_METHOD_1_E894622E598E411A_OFFSET))(this, a1);
	}
};
