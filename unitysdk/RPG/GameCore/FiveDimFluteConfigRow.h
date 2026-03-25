#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimFluteEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLUTECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171F2C40)
#define RPG_GAMECORE_FIVEDIMFLUTECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171F30D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFluteConfigRow_TypeDefinitionIndex = 12907;

	class FiveDimFluteConfigRow : public ::System::Object
	{
	public:
		::System::String* GPName; // 0x10
		::System::String* Code; // 0x18
		::System::UInt32 EntranceID; // 0x20
		::System::UInt32 GroupID; // 0x24
		::RPG::Client::TextID AutoPlayChangeGPFailTextmapKey; // 0x28
		::System::UInt32 FiveDimAnchorID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Int16 GPValue; // 0x40
		::System::UInt32 ContainerID; // 0x44
		::System::UInt32 TeleAnchorID; // 0x48
		::RPG::GameCore::FiveDimFluteEffectType Type; // 0x4C
		::RPG::Client::TextID TeleAreaName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FiveDimFluteConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFluteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLUTECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
