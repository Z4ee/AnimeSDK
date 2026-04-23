#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define CLASS_1_0DC2404DE84FC448_METHOD_1_058D167A2898E88E_OFFSET UNITYSDK_OFFSET(0x9769980)
#define CLASS_1_0DC2404DE84FC448_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x9769BA0)

inline static constexpr unsigned int Class_1_0DC2404DE84FC448_TypeDefinitionIndex = 45607;

class Class_1_0DC2404DE84FC448 : public ::System::Object
{
public:
	static ::UnityEngine::Mesh** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DC2404DE84FC448_TypeDefinitionIndex)->GetStaticField(0x75F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DC2404DE84FC448_TypeDefinitionIndex)->GetStaticField(0x3490);
	}

	static ::UnityEngine::Mesh* Method_1_058D167A2898E88E()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DC2404DE84FC448_METHOD_1_058D167A2898E88E_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DC2404DE84FC448_METHOD_1_F730968E2645E14B_OFFSET))();
	}
};
