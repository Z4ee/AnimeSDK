#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPEQUIPSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A14EE0)
#define RPG_GAMECORE_IDLELIVESPEQUIPSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A15140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpEquipSkillRow_TypeDefinitionIndex = 11205;

	class IdleLiveSpEquipSkillRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::RPG::Client::TextID SkillDesc; // 0x20
		::System::UInt32 Rarity; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveSpEquipSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpEquipSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
