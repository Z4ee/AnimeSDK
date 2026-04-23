#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTIONROOMICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A14290)
#define RPG_GAMECORE_IDLELIVEQUESTIONROOMICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A143B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionRoomIconRow_TypeDefinitionIndex = 11278;

	class IdleLiveQuestionRoomIconRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 SpecialRoomIconID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROOMICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionRoomIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROOMICONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
