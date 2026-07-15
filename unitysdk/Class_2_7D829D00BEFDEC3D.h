#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_849EE5CF9026AE9F.h"

namespace System { class String; }

#define CLASS_2_7D829D00BEFDEC3D_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x17301060)
#define CLASS_2_7D829D00BEFDEC3D__CTOR_OFFSET UNITYSDK_OFFSET(0x17301070)

inline static constexpr unsigned int Class_2_7D829D00BEFDEC3D_TypeDefinitionIndex = 65855;

class Class_2_7D829D00BEFDEC3D : public ::Class_1_849EE5CF9026AE9F
{
public:
	::System::String* _ImagePath_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_ImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D829D00BEFDEC3D_GET_IMAGEPATH_OFFSET))(this);
	}
};
