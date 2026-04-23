#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190AA720)
#define RPG_GAMECORE_TRAINPARTYEVENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190AA8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventConfigRow_TypeDefinitionIndex = 14519;

	class TrainPartyEventConfigRow : public ::System::Object
	{
	public:
		::System::String* EventActPath; // 0x10
		::System::String* EffectJsonPath; // 0x18
		::System::UInt32 EventID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyEventConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyEventConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
