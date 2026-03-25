#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::CustomRP { class CustomPostProcessData_CustomShaderResources; }
namespace RPG::CustomRP { class CustomPostProcessData_CustomTextureResources; }
namespace RPG::CustomRP { class CustomPostProcessData_CustomUIShaderResources; }

#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_RELOADRES_OFFSET UNITYSDK_OFFSET(0x16A8EDC0)
#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8EDD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomPostProcessData_TypeDefinitionIndex = 29376;

	class CustomPostProcessData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::CustomRP::CustomPostProcessData_CustomShaderResources* shaders; // 0x18
		::RPG::CustomRP::CustomPostProcessData_CustomUIShaderResources* uiShaders; // 0x20
		::RPG::CustomRP::CustomPostProcessData_CustomTextureResources* textures; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA__CTOR_OFFSET))(this);
		}

		::System::Void ReloadRes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_RELOADRES_OFFSET))(this);
		}
	};
}
