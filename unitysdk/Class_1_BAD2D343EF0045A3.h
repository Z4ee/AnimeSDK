#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_465;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_BAD2D343EF0045A3_METHOD_1_04309940D97A325F_OFFSET UNITYSDK_OFFSET(0x8BFFD30)
#define CLASS_1_BAD2D343EF0045A3_METHOD_1_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x8C00310)
#define CLASS_1_BAD2D343EF0045A3_METHOD_1_94EBCBE0FCDA9467_OFFSET UNITYSDK_OFFSET(0x8C00210)
#define CLASS_1_BAD2D343EF0045A3_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x8BFFE80)
#define CLASS_1_BAD2D343EF0045A3__CTOR_OFFSET UNITYSDK_OFFSET(0x8C00360)

inline static constexpr unsigned int Class_1_BAD2D343EF0045A3_TypeDefinitionIndex = 55699;

class Class_1_BAD2D343EF0045A3 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_465*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAD2D343EF0045A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_04309940D97A325F(::Class_0_16E4307DCC419505_465* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_465*))((::PBYTE)hIl2Cpp + CLASS_1_BAD2D343EF0045A3_METHOD_1_04309940D97A325F_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAD2D343EF0045A3_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_465*>* Method_1_94EBCBE0FCDA9467()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_465*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAD2D343EF0045A3_METHOD_1_94EBCBE0FCDA9467_OFFSET))(this);
	}

	::System::Void Method_1_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAD2D343EF0045A3_METHOD_1_62593EE2FE331D20_OFFSET))(this);
	}
};
