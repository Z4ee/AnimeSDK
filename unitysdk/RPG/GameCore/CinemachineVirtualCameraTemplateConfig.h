#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }

#define RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIG_METHOD_2_E49704EFF52C4D3C_OFFSET UNITYSDK_OFFSET(0x170AEC30)
#define RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170AEE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CinemachineVirtualCameraTemplateConfig_TypeDefinitionIndex = 15051;

	class CinemachineVirtualCameraTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ConfigTemplateName; // 0x10
		::System::String* PrefabTemplatePath; // 0x18
		::System::Boolean IsLocal; // 0x20
		::System::String* Comment; // 0x28
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E49704EFF52C4D3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIG_METHOD_2_E49704EFF52C4D3C_OFFSET))(a1, a2);
		}
	};
}
