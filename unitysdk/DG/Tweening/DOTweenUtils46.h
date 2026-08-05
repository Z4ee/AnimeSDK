#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define DG_TWEENING_DOTWEENUTILS46_SWITCHTORECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1FA1C350)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenUtils46_TypeDefinitionIndex = 35089;

	class DOTweenUtils46 : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 SwitchToRectTransform(::UnityEngine::RectTransform* from, ::UnityEngine::RectTransform* to)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENUTILS46_SWITCHTORECTTRANSFORM_OFFSET))(from, to);
		}
	};
}
