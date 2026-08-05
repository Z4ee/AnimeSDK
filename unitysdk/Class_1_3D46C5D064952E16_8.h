#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_231;
class Class_2_208CC9941471731A_565;

#define CLASS_1_3D46C5D064952E16_8_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0xFFB0E50)
#define CLASS_1_3D46C5D064952E16_8__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB0E40)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_8_TypeDefinitionIndex = 71192;

class Class_1_3D46C5D064952E16_8 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_565* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_208CC9941471731A_565* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_565*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_8__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_231* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_231*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_8_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}
};
