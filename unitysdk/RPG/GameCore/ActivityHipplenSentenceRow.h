#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAF7D10)
#define RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF7F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenSentenceRow_TypeDefinitionIndex = 11241;

	class ActivityHipplenSentenceRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID SentenceDesc; // 0x18
		::RPG::Client::TextID TalkSentenceName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenSentenceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenSentenceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
