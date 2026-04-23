#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B571C0)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B57880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDifficultyGuideConfigRow_TypeDefinitionIndex = 13465;

	class MonsterDifficultyGuideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::System::UInt32 SkillID; // 0x18
		::System::UInt32 DifficultyGuideID; // 0x1C
		::RPG::Client::TextID DifficultyGuideDescription; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
