#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPRITEPRESETRECORD_METHOD_2_491D3F7FADDC2F1E_OFFSET UNITYSDK_OFFSET(0x17760320)
#define RPG_GAMECORE_SPRITEPRESETRECORD_METHOD_2_FCB4408EFD8703A6_OFFSET UNITYSDK_OFFSET(0x17760160)
#define RPG_GAMECORE_SPRITEPRESETRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x17760310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpritePresetRecord_TypeDefinitionIndex = 22475;

	class SpritePresetRecord : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETRECORD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FCB4408EFD8703A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpritePresetRecord*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpritePresetRecord*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETRECORD_METHOD_2_FCB4408EFD8703A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_491D3F7FADDC2F1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpritePresetRecord* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpritePresetRecord*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPRITEPRESETRECORD_METHOD_2_491D3F7FADDC2F1E_OFFSET))(a1, a2);
		}
	};
}
