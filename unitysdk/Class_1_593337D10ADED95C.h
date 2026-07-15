#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3437ECE1CCDFA38D.h"
#include "unitysdk/System/Object.h"

class Class_2_465A9E6CC2B0EF21;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_593337D10ADED95C_METHOD_1_861847764EF24B10_OFFSET UNITYSDK_OFFSET(0x15898890)
#define CLASS_1_593337D10ADED95C__CTOR_OFFSET UNITYSDK_OFFSET(0x15898880)

inline static constexpr unsigned int Class_1_593337D10ADED95C_TypeDefinitionIndex = 75130;

class Class_1_593337D10ADED95C : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Camera* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_593337D10ADED95C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_861847764EF24B10(::Class_2_465A9E6CC2B0EF21* a1, ::Struct_2_3437ECE1CCDFA38D a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*, ::Struct_2_3437ECE1CCDFA38D))((::PBYTE)hIl2Cpp + CLASS_1_593337D10ADED95C_METHOD_1_861847764EF24B10_OFFSET))(this, a1, a2);
	}
};
