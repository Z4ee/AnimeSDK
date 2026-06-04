#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196F61F0)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196F6950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventMuseumItemConfigRow_TypeDefinitionIndex = 13563;

	class EventMuseumItemConfigRow : public ::System::Object
	{
	public:
		::System::String* MissionStartString; // 0x10
		::System::UInt32 MuseumItemID; // 0x18
		::System::Boolean ForceComplete; // 0x1C
		::System::Boolean IsTargetReward; // 0x1D
		::RPG::Client::TextID EventContentTextID; // 0x20
		::System::UInt32 EventMuseumItemID; // 0x30
		::System::UInt32 MissionID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EventMuseumItemConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EventMuseumItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
