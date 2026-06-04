#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CLASS_1_E13F86AD88B9BFBF__CTOR_OFFSET UNITYSDK_OFFSET(0xB071AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int A4SkyDomeEffectControlBehavior_Class_1_E13F86AD88B9BFBF_TypeDefinitionIndex = 66263;

	class A4SkyDomeEffectControlBehavior_Class_1_E13F86AD88B9BFBF : public ::System::Object
	{
	public:
		::UnityEngine::Material* Field_1_0; // 0x10
		::System::Single Field_1_1; // 0x18
		::UnityEngine::Vector3 Field_1_2; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_A4SKYDOMEEFFECTCONTROLBEHAVIOR_CLASS_1_E13F86AD88B9BFBF__CTOR_OFFSET))(this);
		}
	};
}
