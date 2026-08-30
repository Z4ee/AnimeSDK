#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E223664CCFC59063_GET_R_OFFSET UNITYSDK_OFFSET(0x1995EE20)
#define CLASS_1_E223664CCFC59063_GET_X_OFFSET UNITYSDK_OFFSET(0x1995EDE0)
#define CLASS_1_E223664CCFC59063_GET_Y_OFFSET UNITYSDK_OFFSET(0x1995EE00)
#define CLASS_1_E223664CCFC59063_SET_R_OFFSET UNITYSDK_OFFSET(0x1995EE30)
#define CLASS_1_E223664CCFC59063_SET_X_OFFSET UNITYSDK_OFFSET(0x1995EDF0)
#define CLASS_1_E223664CCFC59063_SET_Y_OFFSET UNITYSDK_OFFSET(0x1995EE10)
#define CLASS_1_E223664CCFC59063__CTOR_OFFSET UNITYSDK_OFFSET(0x1995EE40)

inline static constexpr unsigned int Class_1_E223664CCFC59063_TypeDefinitionIndex = 64528;

class Class_1_E223664CCFC59063 : public ::System::Object
{
public:
	::System::Double _Y_k__BackingField; // 0x10
	::System::Double _R_k__BackingField; // 0x18
	::System::Double _X_k__BackingField; // 0x20

	::System::Void _ctor(::System::Double a1, ::System::Double a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_E223664CCFC59063__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Double get_X()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E223664CCFC59063_GET_X_OFFSET))(this);
	}

	::System::Void set_X(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_E223664CCFC59063_SET_X_OFFSET))(this, a1);
	}

	::System::Double get_Y()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E223664CCFC59063_GET_Y_OFFSET))(this);
	}

	::System::Void set_Y(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_E223664CCFC59063_SET_Y_OFFSET))(this, a1);
	}

	::System::Double get_R()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E223664CCFC59063_GET_R_OFFSET))(this);
	}

	::System::Void set_R(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_E223664CCFC59063_SET_R_OFFSET))(this, a1);
	}
};
