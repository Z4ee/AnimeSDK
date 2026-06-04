#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEVENTSENTENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198432A0)
#define RPG_GAMECORE_IDLELIVEEVENTSENTENCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19843540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEventSentenceRow_TypeDefinitionIndex = 11195;

	class IdleLiveEventSentenceRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 Index; // 0x28
		::System::UInt32 SectionID; // 0x2C
		::RPG::Client::TextID Sentence; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEVENTSENTENCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveEventSentenceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEventSentenceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEVENTSENTENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
