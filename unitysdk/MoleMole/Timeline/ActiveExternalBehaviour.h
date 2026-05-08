#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x12B1D0A0)
#define MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x12B1D030)
#define MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x12B1D080)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ActiveExternalBehaviour_TypeDefinitionIndex = 51942;

	class ActiveExternalBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ACTIVEEXTERNALBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
