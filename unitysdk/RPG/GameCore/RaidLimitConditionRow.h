#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/RaidLimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RAIDLIMITCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3832D0)
#define RPG_GAMECORE_RAIDLIMITCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D383A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidLimitConditionRow_TypeDefinitionIndex = 14430;

	class RaidLimitConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamIntList; // 0x10
		::RPG::GameCore::ParamType ParamType; // 0x18
		::System::UInt32 ParamInt2; // 0x1C
		::RPG::Client::TextID LimitDesc; // 0x20
		::System::UInt32 ParamInt1; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::GameCore::RaidLimitType LimitType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RaidLimitConditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidLimitConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
