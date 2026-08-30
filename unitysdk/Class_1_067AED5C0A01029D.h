#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_469A56953483CA0D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_067AED5C0A01029D_METHOD_1_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0x1351E790)
#define CLASS_1_067AED5C0A01029D_METHOD_1_4A6451E7BE2319E5_OFFSET UNITYSDK_OFFSET(0x1351E820)
#define CLASS_1_067AED5C0A01029D__CTOR_OFFSET UNITYSDK_OFFSET(0x1351E890)

inline static constexpr unsigned int Class_1_067AED5C0A01029D_TypeDefinitionIndex = 57607;

class Class_1_067AED5C0A01029D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* CCBPJFHKOGM; // 0x10
	::System::Boolean OFLMCLABBLC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_067AED5C0A01029D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_01953D7882459DEC(::Class_2_469A56953483CA0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_469A56953483CA0D*))((::PBYTE)hIl2Cpp + CLASS_1_067AED5C0A01029D_METHOD_1_01953D7882459DEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A6451E7BE2319E5(::Class_2_469A56953483CA0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_469A56953483CA0D*))((::PBYTE)hIl2Cpp + CLASS_1_067AED5C0A01029D_METHOD_1_4A6451E7BE2319E5_OFFSET))(this, a1);
	}
};
