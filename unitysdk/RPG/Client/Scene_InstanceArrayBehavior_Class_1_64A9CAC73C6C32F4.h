#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SceneLinearDeformData.h"
#include "unitysdk/RPG/Client/SceneQuadDeformData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Scene_InstanceArrayElementDataMonoBase; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CLASS_1_64A9CAC73C6C32F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF60970)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayBehavior_Class_1_64A9CAC73C6C32F4_TypeDefinitionIndex = 70809;

	class Scene_InstanceArrayBehavior_Class_1_64A9CAC73C6C32F4 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* FIOBBLNAIKA; // 0x10
		::Il2CppArray<::RPG::Client::SceneLinearDeformData>* AEBACOLPEOF; // 0x18
		::Il2CppArray<::UnityEngine::Matrix4x4>* EPBJMODAAEO; // 0x20
		::Il2CppArray<::UnityEngine::Matrix4x4>* FOKCDJELBFP; // 0x28
		::Il2CppArray<::RPG::Client::Scene_InstanceArrayElementDataMonoBase*>* CPMAKJCNCKC; // 0x30
		::UnityEngine::Mesh* BBBBPICMJMN; // 0x38
		::Il2CppArray<::RPG::Client::SceneQuadDeformData>* FGNMFMAOECP; // 0x40
		::UnityEngine::Material* PCANJIIKLDC; // 0x48
		::Il2CppArray<::UnityEngine::Transform*>* BGJEJINPPGG; // 0x50
		::System::Int32 PDHOJECNGIC; // 0x58
		::System::UInt32 NFLMENFMMOK; // 0x5C
		::UnityEngine::Rendering::ShadowCastingMode GPJONLFBGKF; // 0x60
		::System::Boolean LDGOKGNBPPP; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_CLASS_1_64A9CAC73C6C32F4__CTOR_OFFSET))(this);
		}
	};
}
