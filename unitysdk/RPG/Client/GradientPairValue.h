#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PairValueEntry.h"

namespace UnityEngine { class Gradient; }

#define RPG_CLIENT_GRADIENTPAIRVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA43C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GradientPairValue_TypeDefinitionIndex = 70983;

	class GradientPairValue : public ::RPG::Client::PairValueEntry
	{
	public:
		::UnityEngine::Gradient* Gradient; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRADIENTPAIRVALUE__CTOR_OFFSET))(this);
		}
	};
}
