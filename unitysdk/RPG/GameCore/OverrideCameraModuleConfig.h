#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraModuleConfigOverrideType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDECAMERAMODULECONFIG_METHOD_2_EB8D532763C31D80_OFFSET UNITYSDK_OFFSET(0x1D40BC60)
#define RPG_GAMECORE_OVERRIDECAMERAMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40BD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideCameraModuleConfig_TypeDefinitionIndex = 21945;

	class OverrideCameraModuleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CameraModuleConfigOverrideType OverrideType; // 0x10
		::System::String* OverrideConfigPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECAMERAMODULECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EB8D532763C31D80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideCameraModuleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideCameraModuleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECAMERAMODULECONFIG_METHOD_2_EB8D532763C31D80_OFFSET))(a1, a2);
		}
	};
}
