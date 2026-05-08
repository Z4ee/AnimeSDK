#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_3_8B0536393CC32D9C_CLASS_1_C682907C903E0925_2_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x17840710)
#define CLASS_3_8B0536393CC32D9C_CLASS_1_C682907C903E0925_2_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x178407A0)
#define CLASS_3_8B0536393CC32D9C_CLASS_1_C682907C903E0925_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17840700)

inline static constexpr unsigned int Class_3_8B0536393CC32D9C_Class_1_C682907C903E0925_2_TypeDefinitionIndex = 82798;

class Class_3_8B0536393CC32D9C_Class_1_C682907C903E0925_2 : public ::System::Object
{
public:
	::UnityEngine::Material* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B0536393CC32D9C_CLASS_1_C682907C903E0925_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8B0536393CC32D9C_CLASS_1_C682907C903E0925_2_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B0536393CC32D9C_CLASS_1_C682907C903E0925_2_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
