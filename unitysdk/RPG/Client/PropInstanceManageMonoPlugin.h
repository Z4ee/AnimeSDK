#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropInstanceManageBehavior_RenderType.h"
#include "unitysdk/RPG/Client/PropInstanceManageBehavior_UpdateType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class PropInstanceManageBehavior; }
namespace RPG::Client { class PropInstanceMatConfigBase; }
namespace RPG::Client { class PropInstanceTransform; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROPINSTANCEMANAGEMONOPLUGIN_GET_IFUSECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xA231B50)
#define RPG_CLIENT_PROPINSTANCEMANAGEMONOPLUGIN_SETINSTANCEMATRIX_OFFSET UNITYSDK_OFFSET(0xA231AE0)
#define RPG_CLIENT_PROPINSTANCEMANAGEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA231B60)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceManageMonoPlugin_TypeDefinitionIndex = 57956;

	class PropInstanceManageMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::PropInstanceManageBehavior*>
	{
	public:
		::System::Int32 InstanceAmount; // 0x30
		::RPG::Client::PropInstanceManageBehavior_RenderType RenderType; // 0x34
		::RPG::Client::PropInstanceManageBehavior_UpdateType UpdateMode; // 0x38
		::UnityEngine::Material* BaseMaterial; // 0x40
		::UnityEngine::Mesh* BaseMesh; // 0x48
		::System::Int32 SubMeshIndex; // 0x50
		::UnityEngine::Bounds ItemBounds; // 0x54
		::System::Boolean IfUseRelativeTransform; // 0x6C
		::UnityEngine::Transform* RelativeTransform; // 0x70
		::System::Boolean UsePosition; // 0x78
		::System::Boolean UseRotation; // 0x79
		::System::Boolean UseScale; // 0x7A
		::System::Collections::Generic::List_1<::RPG::Client::PropInstanceTransform*>* TransformVarients; // 0x80
		::Il2CppArray<::RPG::Client::PropInstanceMatConfigBase*>* PropInstanceMatConfigs; // 0x88
		::Il2CppArray<::UnityEngine::Vector4>* CustomDatas; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SetInstanceMatrix(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEMONOPLUGIN_SETINSTANCEMATRIX_OFFSET))(this, a1);
		}

		::System::Boolean get_IfUseCustomData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMANAGEMONOPLUGIN_GET_IFUSECUSTOMDATA_OFFSET))(this);
		}
	};
}
