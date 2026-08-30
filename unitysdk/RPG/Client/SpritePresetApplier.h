#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpritePresetStrategyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1036;
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_SPRITEPRESETAPPLIER_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x196EB670)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0x196EB3B0)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_2F2F7924D292824D_1_OFFSET UNITYSDK_OFFSET(0x196EB440)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_2F2F7924D292824D_OFFSET UNITYSDK_OFFSET(0x196EB140)
#define RPG_CLIENT_SPRITEPRESETAPPLIER_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x196EB680)
#define RPG_CLIENT_SPRITEPRESETAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x196EB690)

namespace RPG::Client
{
	inline static constexpr unsigned int SpritePresetApplier_TypeDefinitionIndex = 68990;

	class SpritePresetApplier : public ::System::Object
	{
	public:
		::UnityEngine::Component* _ComponentRef; // 0x10
		::System::String* _PresetName; // 0x18
		::RPG::GameCore::SpritePresetStrategyType _StrategyType; // 0x20
		::Class_0_16E4307DCC419505_1036* _StrategyCache; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_2F2F7924D292824D(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_2F2F7924D292824D_OFFSET))(this, a1);
		}

		::System::Void Method_1_2F2F7924D292824D_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_2F2F7924D292824D_1_OFFSET))(this, a1);
		}

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_GET_PRESETNAME_OFFSET))(this);
		}

		::System::Void set_PresetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_SET_PRESETNAME_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1036* Method_1_016E85CEDEE00FF4()
		{
			return ((::Class_0_16E4307DCC419505_1036*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETAPPLIER_METHOD_1_016E85CEDEE00FF4_OFFSET))(this);
		}
	};
}
