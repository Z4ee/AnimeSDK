#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define SKIRTIK_HAIRBONEDATACLASS__CTOR_OFFSET UNITYSDK_OFFSET(0xE91D1C0)

inline static constexpr unsigned int SkirtIK_HairBoneDataClass_TypeDefinitionIndex = 47716;

class SkirtIK_HairBoneDataClass : public ::System::Object
{
public:
	::UnityEngine::Transform* HairBone; // 0x10
	::UnityEngine::Quaternion OriHairRotation; // 0x18
	::UnityEngine::Vector3 OriHairPosition; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRBONEDATACLASS__CTOR_OFFSET))(this);
	}
};
