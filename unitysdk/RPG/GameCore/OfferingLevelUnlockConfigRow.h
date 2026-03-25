#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OFFERINGLEVELUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17479B60)
#define RPG_GAMECORE_OFFERINGLEVELUNLOCKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17479CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfferingLevelUnlockConfigRow_TypeDefinitionIndex = 13092;

	class OfferingLevelUnlockConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::RPG::Client::TextID UnlockDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGLEVELUNLOCKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::OfferingLevelUnlockConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OfferingLevelUnlockConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFERINGLEVELUNLOCKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
