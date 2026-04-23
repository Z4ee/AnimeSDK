#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MessageLinkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGELINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AE6F80)
#define RPG_GAMECORE_MESSAGELINKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE7630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageLinkRow_TypeDefinitionIndex = 13669;

	class MessageLinkRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::GameCore::MessageLinkType Type; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::System::Boolean OnceOnly; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageLinkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageLinkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
