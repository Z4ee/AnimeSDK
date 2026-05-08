#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
class Class_3_18F930054EC16A59_Class_4_70913AC4DAB8FEAC_6;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_E2828CA0AAE5C975;

#define CLASS_3_18F930054EC16A59_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x111DBCC0)
#define CLASS_3_18F930054EC16A59_METHOD_3_4B2633980FE06100_OFFSET UNITYSDK_OFFSET(0x111DBAD0)
#define CLASS_3_18F930054EC16A59_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x111DB960)
#define CLASS_3_18F930054EC16A59__CTOR_OFFSET UNITYSDK_OFFSET(0x111DBD90)

inline static constexpr unsigned int Class_3_18F930054EC16A59_TypeDefinitionIndex = 73796;

class Class_3_18F930054EC16A59 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_18F930054EC16A59_Class_4_70913AC4DAB8FEAC_6*>*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18F930054EC16A59__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_18F930054EC16A59_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18F930054EC16A59_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_18F930054EC16A59_Class_4_70913AC4DAB8FEAC_6*>*>* Method_3_4B2633980FE06100(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_18F930054EC16A59_Class_4_70913AC4DAB8FEAC_6*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_18F930054EC16A59_METHOD_3_4B2633980FE06100_OFFSET))(this, a1, a2);
	}
};
