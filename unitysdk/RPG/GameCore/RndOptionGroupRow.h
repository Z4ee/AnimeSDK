#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RndGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RNDOPTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AE0960)
#define RPG_GAMECORE_RNDOPTIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE0A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RndOptionGroupRow_TypeDefinitionIndex = 13929;

	class RndOptionGroupRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RndGroupType ID; // 0x10
		::System::UInt32 OptionCount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RNDOPTIONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RndOptionGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RndOptionGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RNDOPTIONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
