#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A4D62D05D5EA8464;
class Class_3_C9B051B1A6821213_Class_4_70913AC4DAB8FEAC_11;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_E2828CA0AAE5C975;

#define CLASS_3_C9B051B1A6821213_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x13995DF0)
#define CLASS_3_C9B051B1A6821213_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x13995A90)
#define CLASS_3_C9B051B1A6821213_METHOD_3_BABE324CF2C9A5E5_OFFSET UNITYSDK_OFFSET(0x13995C00)
#define CLASS_3_C9B051B1A6821213__CTOR_OFFSET UNITYSDK_OFFSET(0x13995EB0)

inline static constexpr unsigned int Class_3_C9B051B1A6821213_TypeDefinitionIndex = 89750;

class Class_3_C9B051B1A6821213 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_C9B051B1A6821213_Class_4_70913AC4DAB8FEAC_11*>*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9B051B1A6821213__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_C9B051B1A6821213_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9B051B1A6821213_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_C9B051B1A6821213_Class_4_70913AC4DAB8FEAC_11*>*>* Method_3_BABE324CF2C9A5E5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_C9B051B1A6821213_Class_4_70913AC4DAB8FEAC_11*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_C9B051B1A6821213_METHOD_3_BABE324CF2C9A5E5_OFFSET))(this, a1, a2);
	}
};
