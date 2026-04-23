#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVESPINECLTRIGGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A15C00)
#define RPG_GAMECORE_IDLELIVESPINECLTRIGGERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A15D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpineCLTriggerRow_TypeDefinitionIndex = 11261;

	class IdleLiveSpineCLTriggerRow : public ::System::Object
	{
	public:
		::System::UInt32 TriggerID; // 0x10
		::RPG::GameCore::IdleLiveSpineAnimTriggerType TriggerType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINECLTRIGGERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINECLTRIGGERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
