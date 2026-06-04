#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_METHOD_2_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x138590)
#define RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_METHOD_2_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x1385A0)
#define RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1384D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterArtModelEffectBehavior_SelfRotator_TypeDefinitionIndex = 65696;

	struct alignas(8) CharacterArtModelEffectBehavior_SelfRotator
	{
		::UnityEngine::GameObject* Target; // 0x10
		::UnityEngine::Vector3 RotationSpeed; // 0x18
		::UnityEngine::Vector3 AccumulatedRotation; // 0x24
		::UnityEngine::Quaternion InitialRotation; // 0x30

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_2_18D9238B9C310BFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_METHOD_2_18D9238B9C310BFF_OFFSET))(this, a1);
		}

		::System::Void Method_2_B1936CE4DA97AA45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_METHOD_2_B1936CE4DA97AA45_1_OFFSET))(this);
		}
	};
}
