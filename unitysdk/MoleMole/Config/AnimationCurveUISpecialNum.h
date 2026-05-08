#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseObjectUISpecialNum.h"

namespace MoleMole::Config { class UISpecialNumGroup; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATIONCURVEUISPECIALNUM_GET_OFFSET UNITYSDK_OFFSET(0x159DA630)
#define MOLEMOLE_CONFIG_ANIMATIONCURVEUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x159DA740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimationCurveUISpecialNum_TypeDefinitionIndex = 67150;

	class AnimationCurveUISpecialNum : public ::MoleMole::Config::BaseObjectUISpecialNum
	{
	public:
		::UnityEngine::AnimationCurve* value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONCURVEUISPECIALNUM__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* Get(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATIONCURVEUISPECIALNUM_GET_OFFSET))(this, uiSpecialNumGroup);
		}
	};
}
