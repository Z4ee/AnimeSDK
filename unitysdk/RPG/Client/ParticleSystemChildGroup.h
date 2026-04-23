#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ParticleSystemGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_METHOD_5_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0xAC3EEA0)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_METHOD_5_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xAC3EA90)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAC3EF30)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_ONPARENTGROUPALPHACHANGE_OFFSET UNITYSDK_OFFSET(0xAC3E6A0)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_START_OFFSET UNITYSDK_OFFSET(0xAC3EA40)
#define RPG_CLIENT_PARTICLESYSTEMCHILDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAC3F200)

namespace RPG::Client
{
	inline static constexpr unsigned int ParticleSystemChildGroup_TypeDefinitionIndex = 63615;

	class ParticleSystemChildGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ParticleSystemGroup*>* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* Field_5_1; // 0x20
		::RPG::Client::ParticleSystemGroup* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP__CTOR_OFFSET))(this);
		}

		::System::Void OnParentGroupAlphaChange(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_ONPARENTGROUPALPHACHANGE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_METHOD_5_E876C8B6D3B840A6_OFFSET))(this);
		}

		::System::Void Method_5_71912DBB0D113575()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTICLESYSTEMCHILDGROUP_METHOD_5_71912DBB0D113575_OFFSET))(this);
		}
	};
}
