#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_25.h"

namespace System { class String; }

#define CLASS_2_7D829D00BEFDEC3D_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14466ED0)
#define CLASS_2_7D829D00BEFDEC3D_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x14466EE0)
#define CLASS_2_7D829D00BEFDEC3D__CTOR_OFFSET UNITYSDK_OFFSET(0x14466EC0)

inline static constexpr unsigned int Class_2_7D829D00BEFDEC3D_TypeDefinitionIndex = 48145;

class Class_2_7D829D00BEFDEC3D : public ::Class_1_43BD383C98B4C0C5_25
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}
};
