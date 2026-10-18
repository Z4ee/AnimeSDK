#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ManikinCharacterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_METHOD_2_0C4BB4EBBCE268F5_OFFSET UNITYSDK_OFFSET(0x1DAF08E0)
#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_METHOD_2_2728F94EAFB58187_OFFSET UNITYSDK_OFFSET(0x1DAF0480)
#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_METHOD_2_9D795A26015F92DE_OFFSET UNITYSDK_OFFSET(0x1DAF0960)
#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_METHOD_2_F10BF4AA0497B46D_OFFSET UNITYSDK_OFFSET(0x1DAF0940)
#define RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF08D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkinCharacterOverrideConfig_TypeDefinitionIndex = 17458;

	class SkinCharacterOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OverrideShoesType; // 0x10
		::System::String* ShoesType; // 0x18
		::System::Boolean OverrideAnimEventConfigList; // 0x20
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x28
		::System::Boolean OverrideAnimEventConfigListInPerformance; // 0x30
		::Il2CppArray<::System::String*>* AnimEventConfigListInPerformance; // 0x38
		::System::Boolean OverrideAnimEventConfigListInBattle; // 0x40
		::Il2CppArray<::System::String*>* AnimEventConfigListInBattle; // 0x48
		::System::Boolean OverrideAnimEventConfigListInManikin; // 0x50
		::Il2CppArray<::System::String*>* AnimEventConfigListInManikin; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2728F94EAFB58187(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkinCharacterOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkinCharacterOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_METHOD_2_2728F94EAFB58187_OFFSET))(a1, a2);
		}

		::System::Void Method_2_0C4BB4EBBCE268F5(::RPG::GameCore::AdventureCharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_METHOD_2_0C4BB4EBBCE268F5_OFFSET))(this, a1);
		}

		::System::Void Method_2_F10BF4AA0497B46D(::RPG::GameCore::CharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_METHOD_2_F10BF4AA0497B46D_OFFSET))(this, a1);
		}

		::System::Void Method_2_9D795A26015F92DE(::RPG::GameCore::ManikinCharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKINCHARACTEROVERRIDECONFIG_METHOD_2_9D795A26015F92DE_OFFSET))(this, a1);
		}
	};
}
