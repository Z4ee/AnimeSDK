#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_473;
class Class_0_16E4307DCC419505_719;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_65ED4E60089A6F9D_METHOD_1_4879D281E0A43E73_OFFSET UNITYSDK_OFFSET(0x18252280)
#define CLASS_1_65ED4E60089A6F9D_METHOD_1_B6923417C218B5F9_OFFSET UNITYSDK_OFFSET(0x18252170)
#define CLASS_1_65ED4E60089A6F9D__CTOR_OFFSET UNITYSDK_OFFSET(0x18252200)

inline static constexpr unsigned int Class_1_65ED4E60089A6F9D_TypeDefinitionIndex = 83853;

class Class_1_65ED4E60089A6F9D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_473*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65ED4E60089A6F9D__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_719* Method_1_B6923417C218B5F9(::Class_0_16E4307DCC419505_473*& a1)
	{
		return ((::Class_0_16E4307DCC419505_719*(*)(::PVOID, ::Class_0_16E4307DCC419505_473*&))((::PBYTE)hIl2Cpp + CLASS_1_65ED4E60089A6F9D_METHOD_1_B6923417C218B5F9_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_719* Method_1_4879D281E0A43E73(::Class_0_16E4307DCC419505_473*& a1)
	{
		return ((::Class_0_16E4307DCC419505_719*(*)(::PVOID, ::Class_0_16E4307DCC419505_473*&))((::PBYTE)hIl2Cpp + CLASS_1_65ED4E60089A6F9D_METHOD_1_4879D281E0A43E73_OFFSET))(this, a1);
	}
};
