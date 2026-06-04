#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVETASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198487B0)
#define RPG_GAMECORE_IDLELIVETASKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198489B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTaskRow_TypeDefinitionIndex = 11214;

	class IdleLiveTaskRow : public ::System::Object
	{
	public:
		::System::UInt32 FinishwayID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 RewardID; // 0x18
		::RPG::Client::TextID Desc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETASKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveTaskRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTaskRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETASKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
