#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Mesh; }

#define CLASS_1_0DC2404DE84FC448_METHOD_1_058D167A2898E88E_OFFSET UNITYSDK_OFFSET(0x186FB490)
#define CLASS_1_0DC2404DE84FC448_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x186FB6B0)

inline static constexpr unsigned int Class_1_0DC2404DE84FC448_TypeDefinitionIndex = 49421;

class Class_1_0DC2404DE84FC448 : public ::System::Object
{
public:
	static ::UnityEngine::Mesh** StaticGet_JOLBNAJKDEJ()
	{
		return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DC2404DE84FC448_TypeDefinitionIndex)->GetStaticField(0x56A60);
	}
	static ::System::Boolean* StaticGet_DLIMEMCMFHJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DC2404DE84FC448_TypeDefinitionIndex)->GetStaticField(0x11B00);
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
