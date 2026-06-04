#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPresentShortenType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19803B00)
#define RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19803DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPresentConfigRow_TypeDefinitionIndex = 12792;

	class GridFightPresentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID PresentName; // 0x18
		::RPG::GameCore::GridFightPresentShortenType ShortenType; // 0x28
		::System::UInt32 BonusID; // 0x2C
		::RPG::Client::TextID PresentDesc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPresentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPresentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRESENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
