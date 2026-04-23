#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYDESKTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18692080)
#define RPG_GAMECORE_ALLEYDESKTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186927E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyDeskTalkRow_TypeDefinitionIndex = 11928;

	class AlleyDeskTalkRow : public ::System::Object
	{
	public:
		::System::String* CustomString; // 0x10
		::System::String* TalkTypeParam; // 0x18
		::System::String* TextIDList; // 0x20
		::System::UInt32 TalkWeight; // 0x28
		::System::UInt32 TalkPriority; // 0x2C
		::System::UInt32 TalkID; // 0x30
		::RPG::GameCore::AlleyTalkType TalkType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyDeskTalkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyDeskTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYDESKTALKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
