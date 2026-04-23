#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVETASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A16540)
#define RPG_GAMECORE_IDLELIVETASKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A16740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTaskRow_TypeDefinitionIndex = 11166;

	class IdleLiveTaskRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::System::UInt32 RewardID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 FinishwayID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETASKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveTaskRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTaskRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETASKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
