#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGECONTACTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF57F70)
#define RPG_GAMECORE_MESSAGECONTACTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF586A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactRow_TypeDefinitionIndex = 13872;

	class MessageContactRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 ContactsType; // 0x1C
		::System::UInt32 ContactsCamp; // 0x20
		::RPG::Client::TextID SignatureText; // 0x28
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MessageContactRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageContactRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
