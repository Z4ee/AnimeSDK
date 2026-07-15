#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B38D05F57D395ACE_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x16FA20C0)
#define CLASS_1_B38D05F57D395ACE_METHOD_1_413DAA1648C1D1B1_OFFSET UNITYSDK_OFFSET(0x16FA2150)
#define CLASS_1_B38D05F57D395ACE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA22F0)

inline static constexpr unsigned int Class_1_B38D05F57D395ACE_TypeDefinitionIndex = 69619;

class Class_1_B38D05F57D395ACE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A* Method_1_413DAA1648C1D1B1(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::Class_1_B38D05F57D395ACE_Class_1_341DCA219041A25A*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B38D05F57D395ACE_METHOD_1_413DAA1648C1D1B1_OFFSET))(this, a1, a2);
	}
};
