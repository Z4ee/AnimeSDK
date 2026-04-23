#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventEffectEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYEVENTEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18693140)
#define RPG_GAMECORE_ALLEYEVENTEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186937F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventEffectRow_TypeDefinitionIndex = 11908;

	class AlleyEventEffectRow : public ::System::Object
	{
	public:
		::System::Single Param3; // 0x10
		::System::Single Param1; // 0x14
		::System::UInt32 EventEffectID; // 0x18
		::RPG::GameCore::EventEffectEnum EventEffectType; // 0x1C
		::System::Single Param2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyEventEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyEventEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
