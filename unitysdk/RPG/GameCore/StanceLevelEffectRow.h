#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STANCELEVELEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CB4630)
#define RPG_GAMECORE_STANCELEVELEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB5000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StanceLevelEffectRow_TypeDefinitionIndex = 14425;

	class StanceLevelEffectRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint StanceLevelEffect; // 0x10
		::System::Int32 ID; // 0x18
		::System::Int32 LevelDifference; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StanceLevelEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StanceLevelEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
