#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_SKILLCOUNTERITEM_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x188FE2F0)
#define RPG_CLIENT_SKILLCOUNTERITEM_SETSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x188FE570)
#define RPG_CLIENT_SKILLCOUNTERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x188FE740)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillCounterItem_TypeDefinitionIndex = 69103;

	class SkillCounterItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Field_5_0; // 0x18
		::UnityEngine::GameObject* Field_5_1; // 0x20
		::UnityEngine::ParticleSystem* Field_5_2; // 0x28
		::UnityEngine::ParticleSystem* Field_5_3; // 0x30
		::System::Boolean Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLCOUNTERITEM__CTOR_OFFSET))(this);
		}

		::System::Void BindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLCOUNTERITEM_BINDVIEW_OFFSET))(this);
		}

		::System::Void SetShowState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLCOUNTERITEM_SETSHOWSTATE_OFFSET))(this, a1);
		}
	};
}
