#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventEffectEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYEVENTEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE769B0)
#define RPG_GAMECORE_ALLEYEVENTEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE77080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyEventEffectRow_TypeDefinitionIndex = 12133;

	class AlleyEventEffectRow : public ::System::Object
	{
	public:
		::System::Single Param1; // 0x10
		::System::Single Param3; // 0x14
		::System::Single Param2; // 0x18
		::System::UInt32 EventEffectID; // 0x1C
		::RPG::GameCore::EventEffectEnum EventEffectType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyEventEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyEventEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYEVENTEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
