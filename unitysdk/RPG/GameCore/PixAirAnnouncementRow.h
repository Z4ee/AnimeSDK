#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRANNOUNCEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A0FD30)
#define RPG_GAMECORE_PIXAIRANNOUNCEMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0FEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirAnnouncementRow_TypeDefinitionIndex = 11601;

	class PixAirAnnouncementRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRANNOUNCEMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirAnnouncementRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirAnnouncementRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRANNOUNCEMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
