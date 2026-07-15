#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C249340)
#define RPG_GAMECORE_CHIMERADUELTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C249560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTalkRow_TypeDefinitionIndex = 10760;

	class ChimeraDuelTalkRow : public ::System::Object
	{
	public:
		::System::UInt32 TalkID; // 0x10
		::RPG::GameCore::ChimeraDuelTalkType Type; // 0x14
		::System::UInt32 TriggerEventID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID ChimeraDuelTalkText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelTalkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
