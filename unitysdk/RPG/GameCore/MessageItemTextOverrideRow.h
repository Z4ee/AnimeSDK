#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AE6500)
#define RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE66A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemTextOverrideRow_TypeDefinitionIndex = 13683;

	class MessageItemTextOverrideRow : public ::System::Object
	{
	public:
		::System::String* Conditions; // 0x10
		::RPG::Client::TextID MainText; // 0x18
		::System::UInt32 ItemID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageItemTextOverrideRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageItemTextOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
