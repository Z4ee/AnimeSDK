#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEDMGLIMITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD2EF20)
#define RPG_GAMECORE_MATCHTHREEDMGLIMITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2F090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeDmgLimitRow_TypeDefinitionIndex = 11509;

	class MatchThreeDmgLimitRow : public ::System::Object
	{
	public:
		::System::UInt32 MaxDamage; // 0x10
		::System::UInt32 Round; // 0x14
		::System::UInt32 BasicDamage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDMGLIMITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeDmgLimitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeDmgLimitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDMGLIMITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
