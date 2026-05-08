#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/EndShapeType.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/EndShape_Circle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_2DDAC2F6C97EB8AD;

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_ENDSHAPE_SAMPLEPOINT_OFFSET UNITYSDK_OFFSET(0x79E6E0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int EndShape_TypeDefinitionIndex = 81283;

	struct alignas(4) EndShape
	{
		::MoleMole::MonoEffectContrllerModule::EndShapeType ShapeType; // 0x10
		::MoleMole::MonoEffectContrllerModule::EndShape_Circle Circle; // 0x14

		/*
		::UnityEngine::Vector3 SamplePoint(::Class_1_2DDAC2F6C97EB8AD* randomGenerator)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_2DDAC2F6C97EB8AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_ENDSHAPE_SAMPLEPOINT_OFFSET))(this, randomGenerator);
		}
		*/
	};
}
