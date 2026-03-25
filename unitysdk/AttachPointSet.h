#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AttachPoint; }
namespace UnityEngine { class Transform; }

#define ATTACHPOINTSET_LATETICK_OFFSET UNITYSDK_OFFSET(0x10BFAD50)
#define ATTACHPOINTSET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10BFB150)
#define ATTACHPOINTSET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10BFACC0)
#define ATTACHPOINTSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10BFAB80)
#define ATTACHPOINTSET_REFRESHLASTTARGETSCALE_OFFSET UNITYSDK_OFFSET(0x10BFAC10)
#define ATTACHPOINTSET_SELFDESTROY_OFFSET UNITYSDK_OFFSET(0x10BFAF90)
#define ATTACHPOINTSET__CTOR_OFFSET UNITYSDK_OFFSET(0x10BFB1A0)

inline static constexpr unsigned int AttachPointSet_TypeDefinitionIndex = 38154;

class AttachPointSet : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 LastTargetScale; // 0x18
	::UnityEngine::Vector3 TargetScale; // 0x24
	::UnityEngine::Vector3 OriginScale; // 0x30
	::RPG::Client::AttachPoint* AttachPoint; // 0x40
	::UnityEngine::Transform* ParentConstraint; // 0x48
	::System::Boolean IsDestroy; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHPOINTSET__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHPOINTSET_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHPOINTSET_ONDISABLE_OFFSET))(this);
	}

	::System::Void LateTick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHPOINTSET_LATETICK_OFFSET))(this);
	}

	::System::Void SelfDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHPOINTSET_SELFDESTROY_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHPOINTSET_ONDESTROY_OFFSET))(this);
	}

	::System::Void RefreshLastTargetScale()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHPOINTSET_REFRESHLASTTARGETSCALE_OFFSET))(this);
	}
};
