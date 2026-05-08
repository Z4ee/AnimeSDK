#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
class Class_3_7207D1AA0A064289_2_Class_2_C3D1E2160A1DAE70_2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7207D1AA0A064289_2_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xFF76710)
#define CLASS_3_7207D1AA0A064289_2_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0xFF76270)
#define CLASS_3_7207D1AA0A064289_2_METHOD_3_EA556D1F110AFEF4_OFFSET UNITYSDK_OFFSET(0xFF763E0)
#define CLASS_3_7207D1AA0A064289_2__CTOR_OFFSET UNITYSDK_OFFSET(0xFF767E0)

inline static constexpr unsigned int Class_3_7207D1AA0A064289_2_TypeDefinitionIndex = 69318;

class Class_3_7207D1AA0A064289_2 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_2_Class_2_C3D1E2160A1DAE70_2*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_2_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_2_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_2_Class_2_C3D1E2160A1DAE70_2*>* Method_3_EA556D1F110AFEF4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_7207D1AA0A064289_2_Class_2_C3D1E2160A1DAE70_2*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7207D1AA0A064289_2_METHOD_3_EA556D1F110AFEF4_OFFSET))(this, a1, a2);
	}
};
