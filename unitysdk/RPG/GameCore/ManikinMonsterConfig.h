#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonsterBodySize.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MANIKINMONSTERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198BA290)
#define RPG_GAMECORE_MANIKINMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198BA570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinMonsterConfig_TypeDefinitionIndex = 16620;

	class ManikinMonsterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x10
		::RPG::GameCore::MonsterBodySize MonsterBodySize; // 0x18
		::System::Single OutlineWidth; // 0x1C
		::Il2CppArray<::System::String*>* AbilityList; // 0x20
		::System::Boolean EnableFloor; // 0x28
		::System::String* ResidentEffectKey; // 0x30
		::System::String* ResidentPossessionKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinMonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinMonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINMONSTERCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
