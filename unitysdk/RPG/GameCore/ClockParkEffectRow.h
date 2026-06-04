#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1965A040)
#define RPG_GAMECORE_CLOCKPARKEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1965A440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkEffectRow_TypeDefinitionIndex = 10739;

	class ClockParkEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlayCardEffectDescParamList; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::RPG::Client::TextID PlayCardEffectDesc; // 0x20
		::System::UInt32 EffectID; // 0x30
		::System::Int32 Param1; // 0x34
		::System::Int32 DiceParam; // 0x38
		::System::Int32 Param3; // 0x3C
		::RPG::GameCore::ClockParkEffectType EffectType; // 0x40
		::System::Int32 Param2; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
