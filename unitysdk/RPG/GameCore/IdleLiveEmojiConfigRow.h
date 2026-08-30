#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_981D4BAE18B257E9;

#define RPG_GAMECORE_IDLELIVEEMOJICONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D19E0C0)
#define RPG_GAMECORE_IDLELIVEEMOJICONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19E210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEmojiConfigRow_TypeDefinitionIndex = 11674;

	class IdleLiveEmojiConfigRow : public ::System::Object
	{
	public:
		::Class_1_981D4BAE18B257E9* TextNumRange; // 0x10
		::System::UInt32 EmojiPhaseID; // 0x18
		::System::Single Interval; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJICONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveEmojiConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveEmojiConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEMOJICONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
