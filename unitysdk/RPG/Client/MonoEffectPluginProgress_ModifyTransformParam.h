#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYTRANSFORMPARAM_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x9CD9B60)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYTRANSFORMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9D30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginProgress_ModifyTransformParam_TypeDefinitionIndex = 57362;

	class MonoEffectPluginProgress_ModifyTransformParam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* TargetTransform; // 0x10
		::System::Boolean ModifyPosition; // 0x18
		::UnityEngine::Vector3 PositionOnBegin; // 0x1C
		::UnityEngine::Vector3 PositionOnEnd; // 0x28
		::System::Boolean ModifyRotation; // 0x34
		::UnityEngine::Quaternion RotationOnBegin; // 0x38
		::UnityEngine::Quaternion RotationOnEnd; // 0x48
		::System::Boolean ModifyScale; // 0x58
		::UnityEngine::Vector3 ScaleOnBegin; // 0x5C
		::UnityEngine::Vector3 ScaleOnEnd; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYTRANSFORMPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_MODIFYTRANSFORMPARAM_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
		}
	};
}
