#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveFuncUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A11410)
#define RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A11660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveFuncUnlockHintRow_TypeDefinitionIndex = 11181;

	class IdleLiveFuncUnlockHintRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::RPG::GameCore::IdleLiveFuncUnlockType FuncUnlockType; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 UnlockId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
