#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirLockActionName.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRLOCKACTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7933B0)
#define RPG_GAMECORE_PIXAIRLOCKACTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D793680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirLockActionConfigRow_TypeDefinitionIndex = 12093;

	class PixAirLockActionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PermissionIDArray; // 0x10
		::RPG::Client::TextID TextHint; // 0x18
		::RPG::GameCore::PixAirLockActionName PermissionActionName; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 AreaID; // 0x30
		::System::UInt32 StageID; // 0x34
		::System::UInt32 NodeID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRLOCKACTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirLockActionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirLockActionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRLOCKACTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
