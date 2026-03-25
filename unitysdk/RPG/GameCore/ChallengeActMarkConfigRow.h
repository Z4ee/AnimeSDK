#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEACTMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17055250)
#define RPG_GAMECORE_CHALLENGEACTMARKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17055380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeActMarkConfigRow_TypeDefinitionIndex = 11810;

	class ChallengeActMarkConfigRow : public ::System::Object
	{
	public:
		::System::String* MarkIconPath; // 0x10
		::System::UInt32 MarkType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTMARKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengeActMarkConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeActMarkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEACTMARKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
