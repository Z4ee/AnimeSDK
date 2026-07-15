#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERATALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C24D670)
#define RPG_GAMECORE_CHIMERATALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24DD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkRow_TypeDefinitionIndex = 12547;

	class ChimeraTalkRow : public ::System::Object
	{
	public:
		::System::String* EvPath; // 0x10
		::RPG::Client::TextID TalkContent; // 0x18
		::System::UInt32 TalkID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
