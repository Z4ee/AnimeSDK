#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A13EA0)
#define RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A13FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionMessageRow_TypeDefinitionIndex = 11270;

	class IdleLiveQuestionMessageRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 MessageID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveQuestionMessageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionMessageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
