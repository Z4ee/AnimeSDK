#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_CUSTOMUISHADERRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x192CEE50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomPostProcessData_CustomUIShaderResources_TypeDefinitionIndex = 37086;

	class CustomPostProcessData_CustomUIShaderResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* uber; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSDATA_CUSTOMUISHADERRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
