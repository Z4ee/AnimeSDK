#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188BC170)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188BC2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBoxRandomConfigRow_TypeDefinitionIndex = 10944;

	class EvolveBuildRewardBoxRandomConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BoxItemIDList; // 0x10
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXRANDOMCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
