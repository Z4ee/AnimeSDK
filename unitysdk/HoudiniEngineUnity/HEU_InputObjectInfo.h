#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HEU_BoundingVolume;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Terrain; }

#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_COPYTO_OFFSET UNITYSDK_OFFSET(0x10881460)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x10883900)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_SETREFERENCESFROMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x10881FA0)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10881390)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputObjectInfo_TypeDefinitionIndex = 38251;

	class HEU_InputObjectInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _gameObject; // 0x10
		::UnityEngine::Terrain* _terrainReference; // 0x18
		::HEU_BoundingVolume* _boundingVolumeReference; // 0x20
		::UnityEngine::Matrix4x4 _syncdTransform; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _syncdChildTransforms; // 0x68
		::System::Boolean _useTransformOffset; // 0x70
		::UnityEngine::Vector3 _translateOffset; // 0x74
		::UnityEngine::Vector3 _rotateOffset; // 0x80
		::UnityEngine::Vector3 _scaleOffset; // 0x8C
		::System::Type* _inputInterfaceType; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputObjectInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_COPYTO_OFFSET))(this, a1);
		}

		::System::Void SetReferencesFromGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_SETREFERENCESFROMGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_InputObjectInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputObjectInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
