#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_52.h"

namespace System { class String; }

#define CLASS_2_7D829D00BEFDEC3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1010E3C0)

inline static constexpr unsigned int Class_2_7D829D00BEFDEC3D_TypeDefinitionIndex = 82445;

class Class_2_7D829D00BEFDEC3D : public ::Class_1_43BD383C98B4C0C5_52
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D__CTOR_OFFSET))(this, a1);
	}
};
