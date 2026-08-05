#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MonoEffectContrllerModule { class PerlinNoiseConfig; }

#define CLASS_1_9B5953640339AD7B_METHOD_1_3A7D9DDA53AE9C94_OFFSET UNITYSDK_OFFSET(0x12F2B570)
#define CLASS_1_9B5953640339AD7B__CTOR_OFFSET UNITYSDK_OFFSET(0x12F2B560)

inline static constexpr unsigned int Class_1_9B5953640339AD7B_TypeDefinitionIndex = 65318;

class Class_1_9B5953640339AD7B : public ::System::Object
{
public:
	::MoleMole::MonoEffectContrllerModule::PerlinNoiseConfig* Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x18
	::System::Int32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B5953640339AD7B__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_3A7D9DDA53AE9C94(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B5953640339AD7B_METHOD_1_3A7D9DDA53AE9C94_OFFSET))(this, a1, a2, a3);
	}
};
