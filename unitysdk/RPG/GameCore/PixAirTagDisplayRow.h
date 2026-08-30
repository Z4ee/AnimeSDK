#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRTAGDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D338DB0)
#define RPG_GAMECORE_PIXAIRTAGDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D338FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirTagDisplayRow_TypeDefinitionIndex = 12086;

	class PixAirTagDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::Boolean IsEquipDisplayTag; // 0x20
		::RPG::GameCore::PixAirEquipTag TagType; // 0x24

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
