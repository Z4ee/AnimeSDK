#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2D29D0)
#define RPG_GAMECORE_MONSTERGUIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D3170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterGuideConfigRow_TypeDefinitionIndex = 14090;

	class MonsterGuideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TextGuideList; // 0x10
		::Il2CppArray<::System::UInt32>* DifficultyList; // 0x18
		::Il2CppArray<::System::UInt32>* TagList; // 0x20
		::Il2CppArray<::System::UInt32>* DifficultyGuideList; // 0x28
		::Il2CppArray<::System::UInt32>* PhaseList; // 0x30
		::RPG::Client::TextID BriefGuide; // 0x38
		::System::UInt32 MonsterID; // 0x48
		::System::UInt32 Difficulty; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterGuideConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterGuideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERGUIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
