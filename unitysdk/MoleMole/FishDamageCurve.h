#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FISHDAMAGECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10DFEF40)

namespace MoleMole
{
	inline static constexpr unsigned int FishDamageCurve_TypeDefinitionIndex = 82368;

	class FishDamageCurve : public ::System::Object
	{
	public:
		::System::Int32 Level; // 0x10
		::UnityEngine::AnimationCurve* ClickDamageCurve; // 0x18
		::UnityEngine::AnimationCurve* PressDamageCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHDAMAGECURVE__CTOR_OFFSET))(this);
		}
	};
}
