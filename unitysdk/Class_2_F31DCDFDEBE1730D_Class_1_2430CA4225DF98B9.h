#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_634683455D6E175A;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_F31DCDFDEBE1730D_CLASS_1_2430CA4225DF98B9_METHOD_1_C694F297279B7DE4_OFFSET UNITYSDK_OFFSET(0x13446B00)
#define CLASS_2_F31DCDFDEBE1730D_CLASS_1_2430CA4225DF98B9__CTOR_OFFSET UNITYSDK_OFFSET(0x13443190)

inline static constexpr unsigned int Class_2_F31DCDFDEBE1730D_Class_1_2430CA4225DF98B9_TypeDefinitionIndex = 50582;

class Class_2_F31DCDFDEBE1730D_Class_1_2430CA4225DF98B9 : public ::System::Object
{
public:
	::Class_1_634683455D6E175A* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F31DCDFDEBE1730D_CLASS_1_2430CA4225DF98B9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_1_C694F297279B7DE4(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F31DCDFDEBE1730D_CLASS_1_2430CA4225DF98B9_METHOD_1_C694F297279B7DE4_OFFSET))(this, a1);
	}
};
