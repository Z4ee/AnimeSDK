#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPACEZOOBAGSLOTSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0A8160)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A87A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooBagSlotsRow_TypeDefinitionIndex = 12291;

	class SpaceZooBagSlotsRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 CatteryID; // 0x18
		::RPG::GameCore::SpaceZooChannelType Channel; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooBagSlotsRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooBagSlotsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
