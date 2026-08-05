#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIGCINEMAMOVECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1487EDE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCinemaMoveCurve_TypeDefinitionIndex = 81361;

	class ConfigCinemaMoveCurve : public ::System::Object
	{
	public:
		::System::Single startPos; // 0x10
		::System::Boolean useCurve; // 0x14
		::UnityEngine::AnimationCurve* curve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCINEMAMOVECURVE__CTOR_OFFSET))(this);
		}
	};
}
