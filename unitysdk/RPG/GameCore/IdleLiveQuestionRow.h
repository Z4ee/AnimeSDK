#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D213FC0)
#define RPG_GAMECORE_IDLELIVEQUESTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D214240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionRow_TypeDefinitionIndex = 11801;

	class IdleLiveQuestionRow : public ::System::Object
	{
	public:
		::System::UInt32 SenderID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 Option2; // 0x18
		::RPG::Client::TextID Content; // 0x20
		::System::Single Duration; // 0x30
		::System::UInt32 Option1; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveQuestionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
