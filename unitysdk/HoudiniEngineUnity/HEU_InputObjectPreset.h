#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x8468C70)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputObjectPreset_TypeDefinitionIndex = 37604;

	class HEU_InputObjectPreset : public ::System::Object
	{
	public:
		::System::String* _gameObjectName; // 0x10
		::System::Boolean _isSceneObject; // 0x18
		::System::Boolean _useTransformOffset; // 0x19
		::UnityEngine::Vector3 _translateOffset; // 0x1C
		::UnityEngine::Vector3 _rotateOffset; // 0x28
		::UnityEngine::Vector3 _scaleOffset; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTPRESET__CTOR_OFFSET))(this);
		}
	};
}
