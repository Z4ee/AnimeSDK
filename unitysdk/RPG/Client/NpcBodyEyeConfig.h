#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class NpcBodyEyeConfig_EyeTransform; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int NpcBodyEyeConfig_TypeDefinitionIndex = 57386;

	struct alignas(8) NpcBodyEyeConfig
	{
		::RPG::GameCore::NPCBodySize bodySize; // 0x10
		::Il2CppArray<::RPG::Client::NpcBodyEyeConfig_EyeTransform*>* transforms; // 0x18
		::UnityEngine::Vector3 eyeBlinkRotateAxis; // 0x20
		::System::Single eyeBlinkRotateAngle; // 0x2C
		::System::String* lookAtOriginPath; // 0x30
		::System::String* leftEyePath; // 0x38
		::System::String* leftEyeEndPath; // 0x40
		::System::String* leftEyeEnd01Path; // 0x48
		::System::String* rightEyePath; // 0x50
		::System::String* rightEyeEndPath; // 0x58
		::System::String* rightEyeEnd01Path; // 0x60
		::System::Single lookAtStopTime; // 0x68
		::UnityEngine::Vector2 lookAtSpeed; // 0x6C
	};
}
