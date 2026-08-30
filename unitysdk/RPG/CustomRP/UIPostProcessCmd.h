#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_UIPOSTPROCESSCMD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16832150)
#define RPG_CUSTOMRP_UIPOSTPROCESSCMD_GET_KEY_OFFSET UNITYSDK_OFFSET(0x16832140)
#define RPG_CUSTOMRP_UIPOSTPROCESSCMD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16831F00)
#define RPG_CUSTOMRP_UIPOSTPROCESSCMD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16832080)
#define RPG_CUSTOMRP_UIPOSTPROCESSCMD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16831DC0)
#define RPG_CUSTOMRP_UIPOSTPROCESSCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x168327F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UIPostProcessCmd_TypeDefinitionIndex = 52160;

	class UIPostProcessCmd : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Shader* postProcessShader; // 0x18
		::UnityEngine::Material* postProcessMat; // 0x20
		::UnityEngine::Vector4 xRange; // 0x28
		::System::Single amount; // 0x38
		::System::Single threshold; // 0x3C
		::System::Single frequency; // 0x40
		::System::Single useGrayColor; // 0x44
		::System::Single colorScale; // 0x48
		::UnityEngine::RenderTexture* BOCOPMCBMOI; // 0x50
		::UnityEngine::RenderTexture* GELKFADFLAJ; // 0x58
		::UnityEngine::RenderTextureDescriptor FBFJGMKFDCC; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPOSTPROCESSCMD__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPOSTPROCESSCMD_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPOSTPROCESSCMD_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPOSTPROCESSCMD_ONDISABLE_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPOSTPROCESSCMD_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPOSTPROCESSCMD_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
