#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace UnityEngine { class GameObject; }

#define HEU_SCRIPTPARAMETEREXAMPLE_START_OFFSET UNITYSDK_OFFSET(0x83E7DF0)
#define HEU_SCRIPTPARAMETEREXAMPLE_UPDATEGRAVITY_OFFSET UNITYSDK_OFFSET(0x83E81D0)
#define HEU_SCRIPTPARAMETEREXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x83E8280)

inline static constexpr unsigned int HEU_ScriptParameterExample_TypeDefinitionIndex = 35092;

class HEU_ScriptParameterExample : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* _evergreenGameObject; // 0x18
	::HoudiniEngineUnity::HEU_HoudiniAsset* _evergreenAsset; // 0x20
	::System::Single _updateRate; // 0x28
	::System::Single _scale; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTPARAMETEREXAMPLE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTPARAMETEREXAMPLE_START_OFFSET))(this);
	}

	::System::Void UpdateGravity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTPARAMETEREXAMPLE_UPDATEGRAVITY_OFFSET))(this);
	}
};
