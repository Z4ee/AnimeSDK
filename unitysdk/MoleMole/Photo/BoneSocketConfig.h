#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_PHOTO_BONESOCKETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x168872B0)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int BoneSocketConfig_TypeDefinitionIndex = 57291;

	class BoneSocketConfig : public ::System::Object
	{
	public:
		::PipelineCamera::SerializableHashString socketName; // 0x10
		::PipelineCamera::SerializableHashString attachedBone; // 0x20
		::UnityEngine::Vector3 localPosition; // 0x30
		::UnityEngine::Quaternion localRotation; // 0x3C
		::UnityEngine::Vector3 localScale; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_BONESOCKETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
