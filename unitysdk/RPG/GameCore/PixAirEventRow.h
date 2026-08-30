#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D336C60)
#define RPG_GAMECORE_PIXAIREVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D336DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEventRow_TypeDefinitionIndex = 12068;

	class PixAirEventRow : public ::System::Object
	{
	public:
		::System::UInt32 ContentID; // 0x10
		::RPG::Client::TextID EventDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
