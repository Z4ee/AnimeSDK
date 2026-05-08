#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_EFFECTSIMULATE_AVATARUIPREVIEWSCENEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x181F28B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int AvatarUIPreviewSceneData_TypeDefinitionIndex = 71280;

	class AvatarUIPreviewSceneData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_AVATARUIPREVIEWSCENEDATA__CTOR_OFFSET))(this);
		}
	};
}
