#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define CLASS_3_80D417AA8835812F_1_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x153A5FA0)
#define CLASS_3_80D417AA8835812F_1_METHOD_3_451128A24F29622D_OFFSET UNITYSDK_OFFSET(0x153A60F0)
#define CLASS_3_80D417AA8835812F_1_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x153A5F00)
#define CLASS_3_80D417AA8835812F_1_METHOD_3_F086E082034F96CA_OFFSET UNITYSDK_OFFSET(0x153A6100)
#define CLASS_3_80D417AA8835812F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x153A6060)

inline static constexpr unsigned int Class_3_80D417AA8835812F_1_TypeDefinitionIndex = 56999;

class Class_3_80D417AA8835812F_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::MonoUITableScrollV2* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80D417AA8835812F_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_80D417AA8835812F_1_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_451128A24F29622D(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_3_80D417AA8835812F_1_METHOD_3_451128A24F29622D_OFFSET))(this, a1);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80D417AA8835812F_1_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	::MonoUITableScrollV2* Method_3_F086E082034F96CA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80D417AA8835812F_1_METHOD_3_F086E082034F96CA_OFFSET))(this);
	}
};
