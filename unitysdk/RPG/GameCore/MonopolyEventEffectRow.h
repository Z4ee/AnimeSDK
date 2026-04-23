#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYEVENTEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B45D70)
#define RPG_GAMECORE_MONOPOLYEVENTEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B45F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventEffectRow_TypeDefinitionIndex = 11426;

	class MonopolyEventEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::RPG::GameCore::MonopolyEffectType Type; // 0x18
		::System::UInt32 EffectID; // 0x1C
		::RPG::Client::TextID EffectContent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyEventEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyEventEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
