#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Type; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_COPYTO_OFFSET UNITYSDK_OFFSET(0x8C8F7A0)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8C8F730)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputObjectInfo_TypeDefinitionIndex = 43509;

	class HEU_InputObjectInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _gameObject; // 0x10
		::UnityEngine::Matrix4x4 _syncdTransform; // 0x18
		::System::Boolean _useTransformOffset; // 0x58
		::UnityEngine::Vector3 _translateOffset; // 0x5C
		::UnityEngine::Vector3 _rotateOffset; // 0x68
		::UnityEngine::Vector3 _scaleOffset; // 0x74
		::System::Type* _inputInterfaceType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo* destObject)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputObjectInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_COPYTO_OFFSET))(this, destObject);
		}
	};
}
