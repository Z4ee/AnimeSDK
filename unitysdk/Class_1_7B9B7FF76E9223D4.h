#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEF2AB94FE2E2E1D;
class Class_3_01B4CC30216C9ABE_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7B9B7FF76E9223D4_METHOD_1_5936382F2B1F3456_OFFSET UNITYSDK_OFFSET(0x1CD6AE20)
#define CLASS_1_7B9B7FF76E9223D4_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x1CD77BD0)
#define CLASS_1_7B9B7FF76E9223D4_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1CD77BC0)
#define CLASS_1_7B9B7FF76E9223D4_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CD77C60)
#define CLASS_1_7B9B7FF76E9223D4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CD6AF80)
#define CLASS_1_7B9B7FF76E9223D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD77A40)

inline static constexpr unsigned int Class_1_7B9B7FF76E9223D4_TypeDefinitionIndex = 88883;

class Class_1_7B9B7FF76E9223D4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BEF2AB94FE2E2E1D*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_7B9B7FF76E9223D4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7B9B7FF76E9223D4_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Class_1_7B9B7FF76E9223D4* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_7B9B7FF76E9223D4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B9B7FF76E9223D4_METHOD_1_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::System::Boolean Method_1_5936382F2B1F3456(::Class_3_01B4CC30216C9ABE_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_01B4CC30216C9ABE_5*))((::PBYTE)hIl2Cpp + CLASS_1_7B9B7FF76E9223D4_METHOD_1_5936382F2B1F3456_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B9B7FF76E9223D4_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B9B7FF76E9223D4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
