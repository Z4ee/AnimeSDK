#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PASSENGERBEHAVIORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BD67B0)
#define RPG_GAMECORE_PASSENGERBEHAVIORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD69C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PassengerBehaviorConfigRow_TypeDefinitionIndex = 14567;

	class PassengerBehaviorConfigRow : public ::System::Object
	{
	public:
		::System::String* NPCOverrideConfig; // 0x10
		::System::UInt32 FloorID; // 0x18
		::System::UInt32 BehaviorID; // 0x1C
		::System::UInt32 AnchorID; // 0x20
		::System::UInt32 NPCID; // 0x24
		::System::UInt32 NPCGroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSENGERBEHAVIORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PassengerBehaviorConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PassengerBehaviorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSENGERBEHAVIORCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
