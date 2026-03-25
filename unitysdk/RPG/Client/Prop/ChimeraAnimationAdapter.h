#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA030A10)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA030A70)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_PLAY_OFFSET UNITYSDK_OFFSET(0xA0308E0)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA030AF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraAnimationAdapter_TypeDefinitionIndex = 63842;

	class ChimeraAnimationAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* ChimeraAnimator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER__CTOR_OFFSET))(this);
		}

		::System::Void Play(::RPG::Client::Prop::ChimeraAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_PLAY_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
