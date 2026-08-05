#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_1_8AD00B3E434B607C_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x12F2B420)
#define CLASS_1_8AD00B3E434B607C_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x12F2B4E0)
#define CLASS_1_8AD00B3E434B607C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F2B3E0)
#define CLASS_1_8AD00B3E434B607C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F2B3D0)

inline static constexpr unsigned int Class_1_8AD00B3E434B607C_TypeDefinitionIndex = 59160;

class Class_1_8AD00B3E434B607C : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AD00B3E434B607C_TypeDefinitionIndex)->GetStaticField(0x12AC0);
	}
	::UnityEngine::Material* Field_1_1; // 0x10

	::System::Void _ctor(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_8AD00B3E434B607C__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8AD00B3E434B607C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8AD00B3E434B607C_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD00B3E434B607C_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
