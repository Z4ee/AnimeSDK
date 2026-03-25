#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ParticleSystemChildGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_PARTICLESYSTEMGROUP_ADDCHILDGROUP_OFFSET UNITYSDK_OFFSET(0x9F1A3B0)
#define RPG_CLIENT_PARTICLESYSTEMGROUP_GET_TARGETALPHA_OFFSET UNITYSDK_OFFSET(0x9F1A520)
#define RPG_CLIENT_PARTICLESYSTEMGROUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F1AF20)
#define RPG_CLIENT_PARTICLESYSTEMGROUP_REMOVECHILDGROUP_OFFSET UNITYSDK_OFFSET(0x9F1A320)
#define RPG_CLIENT_PARTICLESYSTEMGROUP_SETPARENTALPHA_OFFSET UNITYSDK_OFFSET(0x9F19C50)
#define RPG_CLIENT_PARTICLESYSTEMGROUP_SETPARTICLECOLORALPHA_OFFSET UNITYSDK_OFFSET(0x9F19BC0)
#define RPG_CLIENT_PARTICLESYSTEMGROUP_START_OFFSET UNITYSDK_OFFSET(0x9F1A570)
#define RPG_CLIENT_PARTICLESYSTEMGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F1AE10)
#define RPG_CLIENT_PARTICLESYSTEMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1AFC0)
#define RPG_CLIENT_PARTICLESYSTEMGROUP__INIT_OFFSET UNITYSDK_OFFSET(0x9F1A5C0)
#define RPG_CLIENT_PARTICLESYSTEMGROUP__ONALPHACHANGE_OFFSET UNITYSDK_OFFSET(0x9F1AA60)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemGroup_TypeDefinitionIndex = 56373;

	class ParticleSystemGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IgnoreParentGroups; // 0x18
		::System::Single _TargetAlpha; // 0x1C
		::System::Single _PreAlpha; // 0x20
		::System::Single _ParentAlpha; // 0x24
		::System::Boolean _ParentAlphaDirty; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ParticleSystemGroup*>* _ChildParticleSystemGroups; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* _CachedParticleSystemRenderer; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ParticleSystemChildGroup*>* _ChildParticleSystemChildGroups; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP__CTOR_OFFSET))(this);
		}

		::System::Void SetParentAlpha(::System::Single parentAlpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP_SETPARENTALPHA_OFFSET))(this, parentAlpha);
		}

		::System::Void AddChildGroup(::RPG::Client::ParticleSystemChildGroup* childGroup)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParticleSystemChildGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP_ADDCHILDGROUP_OFFSET))(this, childGroup);
		}

		::System::Void RemoveChildGroup(::RPG::Client::ParticleSystemChildGroup* childGroup)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParticleSystemChildGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP_REMOVECHILDGROUP_OFFSET))(this, childGroup);
		}

		static ::System::Void SetParticleColorAlpha(::UnityEngine::ParticleSystemRenderer* render, ::System::Single alpha)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystemRenderer*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP_SETPARTICLECOLORALPHA_OFFSET))(render, alpha);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP__INIT_OFFSET))(this);
		}

		::System::Void _OnAlphaChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP__ONALPHACHANGE_OFFSET))(this);
		}

		::System::Single get_TargetAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMGROUP_GET_TARGETALPHA_OFFSET))(this);
		}
	};
}
