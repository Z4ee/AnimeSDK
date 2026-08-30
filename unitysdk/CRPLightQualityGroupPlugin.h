#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::CustomRP { class CRPProbe; }
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class ReflectionProbe; }

#define CRPLIGHTQUALITYGROUPPLUGIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDD9F6A0)
#define CRPLIGHTQUALITYGROUPPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDD9F410)
#define CRPLIGHTQUALITYGROUPPLUGIN_TRYTURNONLIGHT_OFFSET UNITYSDK_OFFSET(0xDD9FAC0)
#define CRPLIGHTQUALITYGROUPPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xDD9FC20)

inline static constexpr unsigned int CRPLightQualityGroupPlugin_TypeDefinitionIndex = 47783;

class CRPLightQualityGroupPlugin : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* ResPath; // 0x18
	::UnityEngine::ReflectionProbe* IPKBNOPABBC; // 0x20
	::UnityEngine::Light* IMCHJKBFJJC; // 0x28
	::UnityEngine::ParticleSystemRenderer* LGNAJBNEBEC; // 0x30
	::RPG::CustomRP::CRPProbe* JJLBCDOIDBI; // 0x38
	::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x40
	::RPG::CustomRP::CustomLightQualityFilter JHJKHCEJOMH; // 0x44
	::System::Int32 LightQualityVersion; // 0x48
	::System::Boolean DNFOKAPGFHA; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPLIGHTQUALITYGROUPPLUGIN__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPLIGHTQUALITYGROUPPLUGIN_ONENABLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPLIGHTQUALITYGROUPPLUGIN_LATEUPDATE_OFFSET))(this);
	}

	::System::Void TryTurnOnLight()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRPLIGHTQUALITYGROUPPLUGIN_TRYTURNONLIGHT_OFFSET))(this);
	}
};
