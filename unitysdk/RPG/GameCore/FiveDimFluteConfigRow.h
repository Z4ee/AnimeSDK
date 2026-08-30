#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimFluteEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLUTECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0E6850)
#define RPG_GAMECORE_FIVEDIMFLUTECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E6D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFluteConfigRow_TypeDefinitionIndex = 14009;

	class FiveDimFluteConfigRow : public ::System::Object
	{
	public:
		::System::String* GPName; // 0x10
		::Il2CppArray<::System::UInt32>* KeepContentIDList; // 0x18
		::System::String* Code; // 0x20
		::System::UInt32 ContainerID; // 0x28
		::System::UInt32 TeleAnchorID; // 0x2C
		::RPG::Client::TextID TeleAreaName; // 0x30
		::RPG::Client::TextID AutoPlayChangeGPFailTextmapKey; // 0x40
		::System::UInt32 EntranceID; // 0x50
		::System::Int16 GPValue; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 GroupID; // 0x5C
		::RPG::GameCore::FiveDimFluteEffectType Type; // 0x60
		::System::UInt32 FiveDimAnchorID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFluteConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFluteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
