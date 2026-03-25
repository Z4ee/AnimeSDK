#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17450D20)
#define RPG_GAMECORE_MONSTERGUIDETAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17451090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideTagConfigRow_TypeDefinitionIndex = 12995;

	class MonsterGuideTagConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::Il2CppArray<::System::UInt32>* EffectID; // 0x18
		::System::UInt32 TagID; // 0x20
		::System::UInt32 SkillID; // 0x24
		::RPG::Client::TextID TagBriefDescription; // 0x28
		::RPG::Client::TextID TagName; // 0x38
		::RPG::Client::TextID TagDetailDescription; // 0x48

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
