#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ED2F60)
#define RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED3090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkVerificationDistanceRow_TypeDefinitionIndex = 14414;

	class TalkVerificationDistanceRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Single Distance; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TalkVerificationDistanceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkVerificationDistanceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKVERIFICATIONDISTANCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
