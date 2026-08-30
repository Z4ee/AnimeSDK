#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEV2DMGLIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D251610)
#define RPG_GAMECORE_MATCHTHREEV2DMGLIMITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D251780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2DmgLimitRow_TypeDefinitionIndex = 11933;

	class MatchThreeV2DmgLimitRow : public ::System::Object
	{
	public:
		::System::UInt32 BasicDamage; // 0x10
		::System::UInt32 Round; // 0x14
		::System::UInt32 MaxDamage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2DMGLIMITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeV2DmgLimitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2DmgLimitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2DMGLIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
