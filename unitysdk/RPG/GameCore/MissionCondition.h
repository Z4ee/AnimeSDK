#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONCONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A8E20)
#define RPG_GAMECORE_MISSIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A8F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCondition_TypeDefinitionIndex = 14028;

	class MissionCondition : public ::System::Object
	{
	public:
		::System::UInt32 Value; // 0x10
		::RPG::GameCore::MissionBeginType Type; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCONDITION_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
