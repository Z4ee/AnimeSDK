#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMCHATGREETINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17486E00)
#define RPG_GAMECORE_PAMCHATGREETINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174870C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatGreetingRow_TypeDefinitionIndex = 13113;

	class PamChatGreetingRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GreetingTextIDList; // 0x10
		::System::String* Condition; // 0x18
		::System::Boolean IsDailyGreeting; // 0x20
		::System::UInt32 Priority; // 0x24
		::System::UInt32 ID; // 0x28
		::RPG::Client::TextID HudBubble; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATGREETINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PamChatGreetingRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamChatGreetingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATGREETINGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
