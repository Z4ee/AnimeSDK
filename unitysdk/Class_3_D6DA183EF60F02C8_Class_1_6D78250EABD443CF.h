#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemShapeType.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_D6DA183EF60F02C8_CLASS_1_6D78250EABD443CF__CTOR_OFFSET UNITYSDK_OFFSET(0x145AA350)

inline static constexpr unsigned int Class_3_D6DA183EF60F02C8_Class_1_6D78250EABD443CF_TypeDefinitionIndex = 44871;

class Class_3_D6DA183EF60F02C8_Class_1_6D78250EABD443CF : public ::System::Object
{
public:
	::UnityEngine::Renderer* Field_1_5; // 0x10
	::UnityEngine::ParticleSystem* Field_1_0; // 0x18
	::System::Single Field_1_6; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::System::Boolean Field_1_11; // 0x25
	::UnityEngine::ParticleSystemShapeType Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DA183EF60F02C8_CLASS_1_6D78250EABD443CF__CTOR_OFFSET))(this);
	}
};
