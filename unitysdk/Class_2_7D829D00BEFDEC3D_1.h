#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_19.h"

namespace System { class String; }

#define CLASS_2_7D829D00BEFDEC3D_1_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x128BEE80)
#define CLASS_2_7D829D00BEFDEC3D_1_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x128BEE70)
#define CLASS_2_7D829D00BEFDEC3D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x128BEE60)

inline static constexpr unsigned int Class_2_7D829D00BEFDEC3D_1_TypeDefinitionIndex = 50630;

class Class_2_7D829D00BEFDEC3D_1 : public ::Class_1_43BD383C98B4C0C5_19
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D_1_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D_1_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
