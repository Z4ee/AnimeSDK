#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_1_100ED75C115B764C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158C2800)
#define CLASS_1_100ED75C115B764C_METHOD_1_4DE1857021EDD3DF_OFFSET UNITYSDK_OFFSET(0x158C2880)
#define CLASS_1_100ED75C115B764C_METHOD_1_B3725C8DD86BB06D_OFFSET UNITYSDK_OFFSET(0x158C2940)
#define CLASS_1_100ED75C115B764C__CTOR_OFFSET UNITYSDK_OFFSET(0x158C2760)

inline static constexpr unsigned int Class_1_100ED75C115B764C_TypeDefinitionIndex = 78127;

class Class_1_100ED75C115B764C : public ::System::Object
{
public:
	// static const ::System::Single OKFMABJGOPI; // 0x0
	// static const ::System::String* IJIFHOEEBHJ; // 0x0
	::UnityEngine::Material* IMOHCDHKBAJ; // 0x10
	::Class_1_D63DE2EC2835DB62_Class_1_6516DDC30DD1EB36* GCJINNEANCH; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_100ED75C115B764C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_100ED75C115B764C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4DE1857021EDD3DF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_100ED75C115B764C_METHOD_1_4DE1857021EDD3DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3725C8DD86BB06D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_100ED75C115B764C_METHOD_1_B3725C8DD86BB06D_OFFSET))(this, a1);
	}
};
