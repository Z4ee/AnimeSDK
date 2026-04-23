#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B5DA50)
#define RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5DDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideTagConfigRow_TypeDefinitionIndex = 13456;

	class MonsterGuideTagConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::Il2CppArray<::System::UInt32>* EffectID; // 0x18
		::RPG::Client::TextID TagDetailDescription; // 0x20
		::RPG::Client::TextID TagName; // 0x30
		::RPG::Client::TextID TagBriefDescription; // 0x40
		::System::UInt32 SkillID; // 0x50
		::System::UInt32 TagID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterGuideTagConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterGuideTagConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
