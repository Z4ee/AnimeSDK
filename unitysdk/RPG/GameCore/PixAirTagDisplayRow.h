#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRTAGDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CEF80)
#define RPG_GAMECORE_PIXAIRTAGDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CF180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirTagDisplayRow_TypeDefinitionIndex = 11697;

	class PixAirTagDisplayRow : public ::System::Object
	{
	public:
		::System::Boolean IsEquipDisplayTag; // 0x10
		::RPG::GameCore::PixAirEquipTag TagType; // 0x14
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRTAGDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirTagDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirTagDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRTAGDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
