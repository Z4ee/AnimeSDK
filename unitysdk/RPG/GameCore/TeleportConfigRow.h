#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TELEPORTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17898060)
#define RPG_GAMECORE_TELEPORTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178986E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeleportConfigRow_TypeDefinitionIndex = 11474;

	class TeleportConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Boolean InitialEnable; // 0x14
		::System::UInt32 FloorID; // 0x18
		::System::UInt32 PlaneID; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::UInt32 ConfigID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TeleportConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeleportConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
