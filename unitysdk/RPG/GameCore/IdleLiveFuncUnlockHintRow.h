#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveFuncUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D211030)
#define RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D211280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveFuncUnlockHintRow_TypeDefinitionIndex = 11717;

	class IdleLiveFuncUnlockHintRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::UInt32 UnlockId; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::RPG::GameCore::IdleLiveFuncUnlockType FuncUnlockType; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEFUNCUNLOCKHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
