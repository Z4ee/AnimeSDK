#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamLimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMLIMITCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17896730)
#define RPG_GAMECORE_TEAMLIMITCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17896E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLimitConditionRow_TypeDefinitionIndex = 14000;

	class TeamLimitConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamIntList; // 0x10
		::System::UInt32 ParamInt2; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID LimitDesc; // 0x20
		::RPG::GameCore::TeamLimitType LimitType; // 0x30
		::System::UInt32 ParamInt1; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TeamLimitConditionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamLimitConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITCONDITIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
