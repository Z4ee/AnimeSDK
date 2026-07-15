#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF5F9C0)
#define RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF5FB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemTextOverrideRow_TypeDefinitionIndex = 13900;

	class MessageItemTextOverrideRow : public ::System::Object
	{
	public:
		::System::String* Conditions; // 0x10
		::System::UInt32 ItemID; // 0x18
		::RPG::Client::TextID MainText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MessageItemTextOverrideRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageItemTextOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
