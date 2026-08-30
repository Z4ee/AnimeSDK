#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEWORLDTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A5E40)
#define RPG_GAMECORE_IDLELIVEWORLDTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A5FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveWorldTagRow_TypeDefinitionIndex = 11751;

	class IdleLiveWorldTagRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::UInt32 WorldTagID; // 0x18
		::RPG::Client::TextID WorldTag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEWORLDTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveWorldTagRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveWorldTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEWORLDTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
