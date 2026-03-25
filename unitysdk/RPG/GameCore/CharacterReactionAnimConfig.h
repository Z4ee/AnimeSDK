#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_METHOD_2_1AF38C60F098DE3A_OFFSET UNITYSDK_OFFSET(0x17071360)
#define RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_METHOD_2_35425D3280C3975B_OFFSET UNITYSDK_OFFSET(0x17071240)
#define RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170701A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReactionAnimConfig_TypeDefinitionIndex = 16697;

	class CharacterReactionAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Hit; // 0x10
		::System::String* HitH; // 0x18
		::System::String* HitFly; // 0x20
		::System::String* HitFlyRecover; // 0x28
		::System::String* FlyHit; // 0x30
		::System::String* Die; // 0x38
		::System::String* DieHit; // 0x40
		::System::String* DieFly; // 0x48
		::System::String* DieLimbo; // 0x50
		::System::Boolean ForceHitH; // 0x58
		::System::Single OverrideHitAnimWeight; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_35425D3280C3975B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReactionAnimConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReactionAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_METHOD_2_35425D3280C3975B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1AF38C60F098DE3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReactionAnimConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReactionAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREACTIONANIMCONFIG_METHOD_2_1AF38C60F098DE3A_OFFSET))(a1, a2);
		}
	};
}
