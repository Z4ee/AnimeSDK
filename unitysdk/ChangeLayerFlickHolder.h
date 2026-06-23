#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }

#define CHANGELAYERFLICKHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x15583240)

inline static constexpr unsigned int ChangeLayerFlickHolder_TypeDefinitionIndex = 50453;

class ChangeLayerFlickHolder : public ::System::Object
{
public:
	::UnityEngine::GameObject* holder; // 0x10
	::Il2CppArray<::UnityEngine::MeshRenderer*>* renderers; // 0x18
	::System::Single flickOnTimer; // 0x20
	::System::Boolean isPlayingAnimation; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERFLICKHOLDER__CTOR_OFFSET))(this);
	}
};
