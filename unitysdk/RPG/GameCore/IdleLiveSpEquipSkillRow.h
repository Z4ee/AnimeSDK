#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPEQUIPSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D214AD0)
#define RPG_GAMECORE_IDLELIVESPEQUIPSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D214D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpEquipSkillRow_TypeDefinitionIndex = 11741;

	class IdleLiveSpEquipSkillRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 Rarity; // 0x24
		::RPG::Client::TextID SkillDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveSpEquipSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpEquipSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
