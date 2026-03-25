#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_NPCBODYEYECONFIG_EYETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E91030)

namespace RPG::Client
{
	inline static constexpr unsigned int NpcBodyEyeConfig_EyeTransform_TypeDefinitionIndex = 48653;

	class NpcBodyEyeConfig_EyeTransform : public ::System::Object
	{
	public:
		::System::String* path; // 0x10
		::System::Boolean isEyeball; // 0x18
		::UnityEngine::Vector3 localPosition; // 0x1C
		::UnityEngine::Quaternion localRotation; // 0x28
		::UnityEngine::Vector3 localScale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCBODYEYECONFIG_EYETRANSFORM__CTOR_OFFSET))(this);
		}
	};
}
