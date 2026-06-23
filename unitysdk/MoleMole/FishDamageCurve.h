#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FISHDAMAGECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B15E30)

namespace MoleMole
{
	inline static constexpr unsigned int FishDamageCurve_TypeDefinitionIndex = 69802;

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
