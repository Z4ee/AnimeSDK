#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PairValueEntry.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CURVEPAIRVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC893C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CurvePairValue_TypeDefinitionIndex = 70982;

	class CurvePairValue : public ::RPG::Client::PairValueEntry
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEPAIRVALUE__CTOR_OFFSET))(this);
		}
	};
}
