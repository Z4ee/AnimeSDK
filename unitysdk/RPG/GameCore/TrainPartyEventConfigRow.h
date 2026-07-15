#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1603E0)
#define RPG_GAMECORE_TRAINPARTYEVENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C160560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventConfigRow_TypeDefinitionIndex = 14706;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyEventConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyEventConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
