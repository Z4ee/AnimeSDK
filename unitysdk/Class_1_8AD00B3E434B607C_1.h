#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_1_8AD00B3E434B607C_1_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x102DB590)
#define CLASS_1_8AD00B3E434B607C_1_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x102DB510)
#define CLASS_1_8AD00B3E434B607C_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x102DB4D0)
#define CLASS_1_8AD00B3E434B607C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x102DB4C0)

inline static constexpr unsigned int Class_1_8AD00B3E434B607C_1_TypeDefinitionIndex = 83757;

class Class_1_8AD00B3E434B607C_1 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AD00B3E434B607C_1_TypeDefinitionIndex)->GetStaticField(0xD0B0);
	}
	::UnityEngine::Material* Field_1_0; // 0x10

	::System::Void _ctor(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_8AD00B3E434B607C_1__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8AD00B3E434B607C_1__CCTOR_OFFSET))();
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AD00B3E434B607C_1_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8AD00B3E434B607C_1_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}
};
