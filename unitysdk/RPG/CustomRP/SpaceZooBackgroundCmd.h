#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6F1160)
#define RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1C6F1150)
#define RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C6F10D0)
#define RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C6F1090)
#define RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C6F1000)
#define RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1390)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SpaceZooBackgroundCmd_TypeDefinitionIndex = 36965;

	class SpaceZooBackgroundCmd : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Texture2D* BgTexture; // 0x18
		::UnityEngine::Shader* BgShader; // 0x20
		::UnityEngine::Material* _Material; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_ONDESTROY_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SPACEZOOBACKGROUNDCMD_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
