#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERGUIDESKILLTEXTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE6D0E0)
#define RPG_GAMECORE_MONSTERGUIDESKILLTEXTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6D360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideSkillTextConfigRow_TypeDefinitionIndex = 14099;

	class MonsterGuideSkillTextConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::Il2CppArray<::System::Single>* ParameterList; // 0x18
		::System::UInt32 SkillTextID; // 0x20
		::RPG::Client::TextID SkillDescription; // 0x28
		::System::UInt32 Difficulty; // 0x38
		::System::UInt32 SkillID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDESKILLTEXTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterGuideSkillTextConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterGuideSkillTextConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDESKILLTEXTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
