#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTORBCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189C1AE0)
#define RPG_GAMECORE_GRIDFIGHTORBCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189C1CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOrbConfigRow_TypeDefinitionIndex = 12697;

	class GridFightOrbConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 OrbID; // 0x10
		::RPG::GameCore::GridFightOrbType Type; // 0x14
		::System::UInt32 BonusID; // 0x18
		::RPG::Client::TextID OrbName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightOrbConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightOrbConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
