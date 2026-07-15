#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_FULLBODYIKEFFECTOROFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x16D57E00)

namespace RPG::Client
{
	inline static constexpr unsigned int FullBodyIKEffectorOffset_TypeDefinitionIndex = 65555;

	class FullBodyIKEffectorOffset : public ::System::Object
	{
	public:
		::System::Single weight; // 0x10
		::UnityEngine::Vector3 bodyOffset; // 0x14
		::UnityEngine::Vector3 leftShoulderOffset; // 0x20
		::UnityEngine::Vector3 rightShoulderOffset; // 0x2C
		::UnityEngine::Vector3 leftThighOffset; // 0x38
		::UnityEngine::Vector3 rightThighOffset; // 0x44
		::UnityEngine::Vector3 leftHandOffset; // 0x50
		::UnityEngine::Vector3 rightHandOffset; // 0x5C
		::UnityEngine::Vector3 leftFootOffset; // 0x68
		::UnityEngine::Vector3 rightFootOffset; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODYIKEFFECTOROFFSET__CTOR_OFFSET))(this);
		}
	};
}
