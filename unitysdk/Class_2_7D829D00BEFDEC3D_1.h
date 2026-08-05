#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_86.h"

namespace System { class String; }

#define CLASS_2_7D829D00BEFDEC3D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBD6B170)

inline static constexpr unsigned int Class_2_7D829D00BEFDEC3D_1_TypeDefinitionIndex = 80412;

class Class_2_7D829D00BEFDEC3D_1 : public ::Class_1_43BD383C98B4C0C5_86
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D_1__CTOR_OFFSET))(this, a1);
	}
};
