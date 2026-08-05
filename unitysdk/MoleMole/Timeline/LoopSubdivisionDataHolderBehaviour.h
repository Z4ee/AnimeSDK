#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace MoleMole::Timeline { class LoopSubdivisionDataHolderParams; }

#define MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x199996F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LoopSubdivisionDataHolderBehaviour_TypeDefinitionIndex = 68733;

	class LoopSubdivisionDataHolderBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::LoopSubdivisionDataHolderParams* Params; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOPSUBDIVISIONDATAHOLDERBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
