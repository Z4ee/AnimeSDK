#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACETRIGGEREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187B4B00)
#define RPG_GAMECORE_CAKERACETRIGGEREVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187B4CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTriggerEventRow_TypeDefinitionIndex = 10538;

	class CakeRaceTriggerEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TriggerPerformanceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* ConditionIDList; // 0x18
		::RPG::GameCore::CakeRaceTriggerEventType TriggerEventType; // 0x20
		::System::UInt32 EventID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRIGGEREVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceTriggerEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceTriggerEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRIGGEREVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
