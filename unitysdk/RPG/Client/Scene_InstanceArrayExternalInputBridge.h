#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Scene_InstanceArrayExternalInputBridgeBehavior; }
namespace RPG::Client { class Scene_InstanceArrayMonoPlugin; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_CLEARALLFROMTHISBRIDGE_OFFSET UNITYSDK_OFFSET(0x1AF65910)
#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_METHOD_7_3C51FAD380D99C61_OFFSET UNITYSDK_OFFSET(0x1AF64BF0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_PUSHFROMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AF64CA0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_PUSHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AF65300)
#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_REMOVETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AF655C0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF65E20)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayExternalInputBridge_TypeDefinitionIndex = 70815;

	class Scene_InstanceArrayExternalInputBridge : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Scene_InstanceArrayExternalInputBridgeBehavior*>
	{
	public:
		::System::Int32 Priority; // 0x30
		::System::String* SourceTag; // 0x38
		::RPG::Client::Scene_InstanceArrayMonoPlugin* MIPMCEJIAMC; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Scene_InstanceArrayMonoPlugin* Method_7_3C51FAD380D99C61()
		{
			return ((::RPG::Client::Scene_InstanceArrayMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_METHOD_7_3C51FAD380D99C61_OFFSET))(this);
		}

		::System::Void PushFromTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_PUSHFROMTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void PushTransform(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_PUSHTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_REMOVETRANSFORM_OFFSET))(this, a1);
		}

		::System::Void ClearAllFromThisBridge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYEXTERNALINPUTBRIDGE_CLEARALLFROMTHISBRIDGE_OFFSET))(this);
		}
	};
}
