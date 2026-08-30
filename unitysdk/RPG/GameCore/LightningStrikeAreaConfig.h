#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_LIGHTNINGSTRIKEAREACONFIG_METHOD_2_3E9727ABC8492920_OFFSET UNITYSDK_OFFSET(0x1DD5A6D0)
#define RPG_GAMECORE_LIGHTNINGSTRIKEAREACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5ABB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightningStrikeAreaConfig_TypeDefinitionIndex = 20837;

	class LightningStrikeAreaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* WarningEffectPath; // 0x10
		::System::String* LightningEffectPath; // 0x18
		::System::Single RandomRadius; // 0x20
		::System::Single WaveStartTime; // 0x24
		::System::Single WaveInterval; // 0x28
		::System::Int32 LightningCount; // 0x2C
		::System::Single LightningInterval; // 0x30
		::System::Single LightningPrepareTime; // 0x34
		::System::Single LightningStartupTime; // 0x38
		::System::Single LightningLastTime; // 0x3C
		::System::Single DamageRadius; // 0x40
		::RPG::GameCore::DynamicFloat* ResetAnchorID; // 0x48
		::Il2CppArray<::System::UInt32>* RandomAnchorList; // 0x50
		::System::String* HitPlayerEvent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3E9727ABC8492920(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LightningStrikeAreaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LightningStrikeAreaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREACONFIG_METHOD_2_3E9727ABC8492920_OFFSET))(a1, a2);
		}
	};
}
