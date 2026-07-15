#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44CD90)
#define RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44CEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkVerificationDistanceRow_TypeDefinitionIndex = 14609;

	class TalkVerificationDistanceRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Single Distance; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkVerificationDistanceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkVerificationDistanceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
