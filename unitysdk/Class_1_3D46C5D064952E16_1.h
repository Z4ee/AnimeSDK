#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3C45F1FC7349B6E;

#define CLASS_1_3D46C5D064952E16_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15457A80)
#define CLASS_1_3D46C5D064952E16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15457A70)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_1_TypeDefinitionIndex = 36751;

class Class_1_3D46C5D064952E16_1 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x10

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_1_EXECUTE_OFFSET))(this);
	}
};
