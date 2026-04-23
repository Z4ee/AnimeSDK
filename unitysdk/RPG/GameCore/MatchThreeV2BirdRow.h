#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEV2BIRDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AC54F0)
#define RPG_GAMECORE_MATCHTHREEV2BIRDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC5650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2BirdRow_TypeDefinitionIndex = 11387;

	class MatchThreeV2BirdRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockLevelList; // 0x10
		::System::UInt32 Order; // 0x18
		::System::UInt32 BirdID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BIRDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2BirdRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2BirdRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2BIRDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
