#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_ITEMICONTWEENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1908BC40)

namespace MoleMole
{
	inline static constexpr unsigned int ItemIconTweenConfig_TypeDefinitionIndex = 78702;

	class ItemIconTweenConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* animationCuve; // 0x10
		::System::Single duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMICONTWEENCONFIG__CTOR_OFFSET))(this);
		}
	};
}
