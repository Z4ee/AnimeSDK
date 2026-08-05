#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define PSFOLLOWOWNERSHAPE_ATTACHTOOWNERMODELRENDERSHAPE_OFFSET UNITYSDK_OFFSET(0x1C3E5E50)
#define PSFOLLOWOWNERSHAPE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C3E5DB0)
#define PSFOLLOWOWNERSHAPE_REFRESHOWNERRENDERSHAPE_OFFSET UNITYSDK_OFFSET(0x1C3E5BE0)
#define PSFOLLOWOWNERSHAPE_RESET_OFFSET UNITYSDK_OFFSET(0x1C3E5E00)
#define PSFOLLOWOWNERSHAPE_START_OFFSET UNITYSDK_OFFSET(0x1C3E5B90)
#define PSFOLLOWOWNERSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E5FE0)

inline static constexpr unsigned int PSFollowOwnerShape_TypeDefinitionIndex = 63911;

class PSFollowOwnerShape : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::SkinnedMeshRenderer* ownerRenderer; // 0x18
	::System::String* meshPath; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PSFOLLOWOWNERSHAPE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PSFOLLOWOWNERSHAPE_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PSFOLLOWOWNERSHAPE_ONENABLE_OFFSET))(this);
	}

	::System::Void Reset(::UnityEngine::SkinnedMeshRenderer* renderer)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + PSFOLLOWOWNERSHAPE_RESET_OFFSET))(this, renderer);
	}

	::System::Void RefreshOwnerRenderShape()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PSFOLLOWOWNERSHAPE_REFRESHOWNERRENDERSHAPE_OFFSET))(this);
	}

	::System::Void AttachToOwnerModelRenderShape(::UnityEngine::ParticleSystem* ps)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + PSFOLLOWOWNERSHAPE_ATTACHTOOWNERMODELRENDERSHAPE_OFFSET))(this, ps);
	}
};
