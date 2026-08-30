#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D213AA0)
#define RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D213BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionMessageRow_TypeDefinitionIndex = 11806;

	class IdleLiveQuestionMessageRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 MessageID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveQuestionMessageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionMessageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
