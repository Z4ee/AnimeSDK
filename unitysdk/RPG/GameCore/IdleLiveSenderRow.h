#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/OfflineMessageSenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A14A70)
#define RPG_GAMECORE_IDLELIVESENDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A14C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSenderRow_TypeDefinitionIndex = 11231;

	class IdleLiveSenderRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::OfflineMessageSenderType SenderType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESENDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveSenderRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSenderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESENDERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
