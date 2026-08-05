#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DynamicBone_FreezeAxis.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_DYNAMICBONEPARA__CTOR_OFFSET UNITYSDK_OFFSET(0x16277540)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicBonePara_TypeDefinitionIndex = 76098;

	class DynamicBonePara : public ::System::Object
	{
	public:
		::System::Single switchTime; // 0x10
		::System::Boolean changeDamping; // 0x14
		::System::Single Damping; // 0x18
		::System::String* DampingCurveKey; // 0x20
		::UnityEngine::AnimationCurve* DampingDistrib; // 0x28
		::System::Boolean changeElasticity; // 0x30
		::System::Single Elasticity; // 0x34
		::System::String* ElasticityCurveKey; // 0x38
		::UnityEngine::AnimationCurve* ElasticityDistrib; // 0x40
		::System::Boolean changeStiffness; // 0x48
		::System::Single Stiffness; // 0x4C
		::System::String* StiffnessCurveKey; // 0x50
		::UnityEngine::AnimationCurve* StiffnessDistrib; // 0x58
		::System::Boolean changeInert; // 0x60
		::System::Single Inert; // 0x64
		::System::String* InertCurveKey; // 0x68
		::UnityEngine::AnimationCurve* InertDistrib; // 0x70
		::System::Boolean changeAxis; // 0x78
		::DynamicBone_FreezeAxis FreezeAxis; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEPARA__CTOR_OFFSET))(this);
		}
	};
}
