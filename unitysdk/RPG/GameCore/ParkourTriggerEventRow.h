#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EParkourEventEntityType.h"
#include "unitysdk/RPG/GameCore/EParkourEventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARKOURTRIGGEREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D415DD0)
#define RPG_GAMECORE_PARKOURTRIGGEREVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D416150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourTriggerEventRow_TypeDefinitionIndex = 12029;

	class ParkourTriggerEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LimitLevelID; // 0x10
		::Il2CppArray<::System::UInt32>* DisplayContentIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x20
		::System::UInt32 LimitRepeatTimeOverride; // 0x28
		::RPG::GameCore::EParkourEventEntityType TargetType; // 0x2C
		::System::UInt32 OriginID; // 0x30
		::RPG::GameCore::EParkourEventType TriggerEventType; // 0x34
		::System::UInt32 EventID; // 0x38
		::RPG::GameCore::EParkourEventEntityType OriginType; // 0x3C
		::System::UInt32 TargetID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParkourTriggerEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourTriggerEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
