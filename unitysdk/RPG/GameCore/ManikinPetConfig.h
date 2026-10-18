#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PetBodySize.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MANIKINPETCONFIG_METHOD_2_E9363F42FE7A03EE_OFFSET UNITYSDK_OFFSET(0x1D7FADA0)
#define RPG_GAMECORE_MANIKINPETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FB1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinPetConfig_TypeDefinitionIndex = 17478;

	class ManikinPetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PetBodySize PetBodySize; // 0x10
		::System::Boolean EnableIdleShow; // 0x14
		::System::String* FreeStyleCharacterID; // 0x18
		::System::String* FreeStyleCharacterConfigPath; // 0x20
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x28
		::Il2CppArray<::System::String*>* ResidentEffectKey; // 0x30
		::System::String* ResidentPossessionKey; // 0x38
		::System::String* CharacterReplaceMaterialConfigPath; // 0x40
		::Il2CppArray<::System::String*>* ReplaceMaterialKeyList; // 0x48
		::Il2CppArray<::System::String*>* ReplaceMaterialVariantKeyList; // 0x50
		::System::String* AtlasFaceSetKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINPETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E9363F42FE7A03EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinPetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinPetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINPETCONFIG_METHOD_2_E9363F42FE7A03EE_OFFSET))(a1, a2);
		}
	};
}
