#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYEVENTBGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5351E0)
#define RPG_GAMECORE_TRAINPARTYEVENTBGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5353A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventBgConfigRow_TypeDefinitionIndex = 15152;

	class TrainPartyEventBgConfigRow : public ::System::Object
	{
	public:
		::System::String* BgConfigJsonPath; // 0x10
		::System::String* BgImage; // 0x18
		::System::String* TriggerAnimationName; // 0x20
		::System::UInt32 BgID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTBGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyEventBgConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyEventBgConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTBGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
