#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_3E954775CE333A0E;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIPARTICLECLIPPABLE_DELAYTICK_OFFSET UNITYSDK_OFFSET(0x17B7D920)
#define RPG_CLIENT_UIPARTICLECLIPPABLE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x17B7D8D0)
#define RPG_CLIENT_UIPARTICLECLIPPABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7DA70)
#define RPG_CLIENT_UIPARTICLECLIPPABLE__DELAYTICK_B__4_0_OFFSET UNITYSDK_OFFSET(0x17B7DA80)

namespace RPG::Client
{
	inline static constexpr unsigned int UIParticleClippable_TypeDefinitionIndex = 71029;

	class UIParticleClippable : public ::RPG::Client::TAMonoPlugin_1<::Class_3_3E954775CE333A0E*>
	{
	public:
		::UnityEngine::RectTransform* Rect; // 0x30
		::System::Boolean UpdateAlways; // 0x38
		::System::Boolean IncludeInactiveRenderers; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTICLECLIPPABLE__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTICLECLIPPABLE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::Void DelayTick(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTICLECLIPPABLE_DELAYTICK_OFFSET))(this, a1);
		}

		::System::Void _DelayTick_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPARTICLECLIPPABLE__DELAYTICK_B__4_0_OFFSET))(this);
		}
	};
}
