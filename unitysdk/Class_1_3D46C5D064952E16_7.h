#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1005B9479049BC5A;
class Class_2_208CC9941471731A_640;
class Class_2_6DE5FBED45BCAC88;

#define CLASS_1_3D46C5D064952E16_7_METHOD_1_990C937A7EFED2E0_OFFSET UNITYSDK_OFFSET(0x18122340)
#define CLASS_1_3D46C5D064952E16_7__CTOR_OFFSET UNITYSDK_OFFSET(0x18122330)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_7_TypeDefinitionIndex = 64208;

class Class_1_3D46C5D064952E16_7 : public ::System::Object
{
public:
	::Class_2_6DE5FBED45BCAC88* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_6DE5FBED45BCAC88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6DE5FBED45BCAC88*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_7__CTOR_OFFSET))(this, a1);
	}

	::Class_1_1005B9479049BC5A* Method_1_990C937A7EFED2E0(::Class_2_208CC9941471731A_640* a1)
	{
		return ((::Class_1_1005B9479049BC5A*(*)(::PVOID, ::Class_2_208CC9941471731A_640*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_7_METHOD_1_990C937A7EFED2E0_OFFSET))(this, a1);
	}
};
