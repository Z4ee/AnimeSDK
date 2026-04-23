#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveCLTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVECLTRIGGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0E5F0)
#define RPG_GAMECORE_IDLELIVECLTRIGGERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0E790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveCLTriggerRow_TypeDefinitionIndex = 11175;

	class IdleLiveCLTriggerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ParamList; // 0x10
		::System::UInt32 TriggerID; // 0x18
		::RPG::GameCore::IdleLiveCLTriggerType Type; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECLTRIGGERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveCLTriggerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveCLTriggerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECLTRIGGERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
