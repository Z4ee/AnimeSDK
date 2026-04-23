#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyShipType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYSHIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1869C410)
#define RPG_GAMECORE_ALLEYSHIPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1869C560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyShipRow_TypeDefinitionIndex = 11912;

	class AlleyShipRow : public ::System::Object
	{
	public:
		::System::String* ShipConfig; // 0x10
		::System::UInt32 ShipID; // 0x18
		::RPG::GameCore::AlleyShipType ShipType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHIPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyShipRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyShipRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHIPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
