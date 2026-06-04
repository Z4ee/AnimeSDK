#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define PRESKIRTIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB06B7A0)
#define PRESKIRTIK__CTOR_OFFSET UNITYSDK_OFFSET(0xB06B860)

inline static constexpr unsigned int PreSkirtIk_TypeDefinitionIndex = 44587;

class PreSkirtIk : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* left_HipL; // 0x18
	::UnityEngine::Transform* right_HipR; // 0x20
	::UnityEngine::Quaternion QPreHipR; // 0x28
	::UnityEngine::Quaternion QPreHipL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PRESKIRTIK__CTOR_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PRESKIRTIK_LATEUPDATE_OFFSET))(this);
	}
};
