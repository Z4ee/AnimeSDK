#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOMAINCITYINACTIONTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x138517E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMainCityInActionTips_TypeDefinitionIndex = 42919;

	class MonoMainCityInActionTips : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* anim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMAINCITYINACTIONTIPS__CTOR_OFFSET))(this);
		}
	};
}
