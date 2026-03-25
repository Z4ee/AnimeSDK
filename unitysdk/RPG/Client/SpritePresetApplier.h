#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpritePresetStrategyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_787;
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_SPRITEPRESETAPPLIER_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xA4B5230)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0xA4B4FD0)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_1B819E8662A63D41_1_OFFSET UNITYSDK_OFFSET(0xA4B5060)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_1B819E8662A63D41_OFFSET UNITYSDK_OFFSET(0xA4B4DC0)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xA4B5240)
#define RPG_CLIENT_SPRITEPRESETAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B5250)

namespace RPG::Client
{
	inline static constexpr unsigned int SpritePresetApplier_TypeDefinitionIndex = 56387;

	class SpritePresetApplier : public ::System::Object
	{
	public:
		::UnityEngine::Component* _ComponentRef; // 0x10
		::System::String* _PresetName; // 0x18
		::RPG::GameCore::SpritePresetStrategyType _StrategyType; // 0x20
		::Class_0_16E4307DCC419505_787* _StrategyCache; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_1B819E8662A63D41(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_1B819E8662A63D41_OFFSET))(this, a1);
		}

		::System::Void Method_1_1B819E8662A63D41_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_1B819E8662A63D41_1_OFFSET))(this, a1);
		}

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_GET_PRESETNAME_OFFSET))(this);
		}

		::System::Void set_PresetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_SET_PRESETNAME_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_787* Method_1_016E85CEDEE00FF4()
		{
			return ((::Class_0_16E4307DCC419505_787*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_016E85CEDEE00FF4_OFFSET))(this);
		}
	};
}
