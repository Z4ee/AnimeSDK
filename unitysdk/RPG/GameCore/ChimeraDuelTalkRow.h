#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E33D650)
#define RPG_GAMECORE_CHIMERADUELTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33D870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTalkRow_TypeDefinitionIndex = 11135;

	class ChimeraDuelTalkRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChimeraDuelTalkText; // 0x10
		::System::UInt32 TalkID; // 0x20
		::System::UInt32 TriggerEventID; // 0x24
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::ChimeraDuelTalkType Type; // 0x2C

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
