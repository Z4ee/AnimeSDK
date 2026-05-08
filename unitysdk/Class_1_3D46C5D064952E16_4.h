#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_241;
class Class_2_208CC9941471731A_959;

#define CLASS_1_3D46C5D064952E16_4_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x11867820)
#define CLASS_1_3D46C5D064952E16_4__CTOR_OFFSET UNITYSDK_OFFSET(0x11867810)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_4_TypeDefinitionIndex = 44764;

class Class_1_3D46C5D064952E16_4 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_959* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_208CC9941471731A_959* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_959*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_4__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_241* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_241*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_4_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}
};
