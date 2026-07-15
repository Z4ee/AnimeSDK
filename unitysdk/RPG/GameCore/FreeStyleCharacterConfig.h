#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleCharacterExtendLayerConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTERCONFIG_METHOD_2_895F216600126C59_OFFSET UNITYSDK_OFFSET(0x1B97F4E0)
#define RPG_GAMECORE_FREESTYLECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97F780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterConfig_TypeDefinitionIndex = 15668;

	class FreeStyleCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleTransitionInfoConfigPath; // 0x10
		::Il2CppArray<::System::String*>* FreeStyleAnimZoneConfigPaths; // 0x18
		::Il2CppArray<::System::String*>* FreeStyleAnimEventConfigPaths; // 0x20
		::System::String* FreeStyleStateConfigPath; // 0x28
		::System::String* FreeStyleGraphConfigPath; // 0x30
		::System::UInt32 FreeStyleStandByMotionID; // 0x38
		::Il2CppArray<::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*>* ExtendLayerConfigs; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_895F216600126C59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERCONFIG_METHOD_2_895F216600126C59_OFFSET))(a1, a2);
		}
	};
}
