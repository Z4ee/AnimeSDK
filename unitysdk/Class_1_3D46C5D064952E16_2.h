#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3C45F1FC7349B6E;

#define CLASS_1_3D46C5D064952E16_2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18A9AE40)
#define CLASS_1_3D46C5D064952E16_2_METHOD_1_FFF4557E60F6F97B_OFFSET UNITYSDK_OFFSET(0x18A9ADC0)
#define CLASS_1_3D46C5D064952E16_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9AE30)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_2_TypeDefinitionIndex = 35109;

class Class_1_3D46C5D064952E16_2 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_2__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_3D46C5D064952E16_2* Method_1_FFF4557E60F6F97B(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::Class_1_3D46C5D064952E16_2*(*)(::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_2_METHOD_1_FFF4557E60F6F97B_OFFSET))(a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_2_EXECUTE_OFFSET))(this);
	}
};
