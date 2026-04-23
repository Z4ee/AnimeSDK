#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STRONGCHALLENGEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EA9460)
#define RPG_GAMECORE_STRONGCHALLENGEBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA9550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeBuffRow_TypeDefinitionIndex = 11729;

	class StrongChallengeBuffRow : public ::System::Object
	{
	public:
		::System::UInt32 StrongChallengeBuffID; // 0x10
		::System::UInt32 BuffCost; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StrongChallengeBuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StrongChallengeBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEBUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
