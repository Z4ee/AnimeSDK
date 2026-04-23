#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B5C9A0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5D150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideConfigRow_TypeDefinitionIndex = 13454;

	class MonsterGuideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TextGuideList; // 0x10
		::Il2CppArray<::System::UInt32>* PhaseList; // 0x18
		::Il2CppArray<::System::UInt32>* TagList; // 0x20
		::Il2CppArray<::System::UInt32>* DifficultyGuideList; // 0x28
		::Il2CppArray<::System::UInt32>* DifficultyList; // 0x30
		::System::UInt32 Difficulty; // 0x38
		::System::UInt32 MonsterID; // 0x3C
		::RPG::Client::TextID BriefGuide; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterGuideConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterGuideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
