#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveQuestionOptionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19846270)
#define RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19846520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionOptionRow_TypeDefinitionIndex = 11315;

	class IdleLiveQuestionOptionRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* GiftIDList; // 0x18
		::Il2CppArray<::System::UInt32>* SpecialChatList; // 0x20
		::RPG::GameCore::IdleLiveQuestionOptionType Type; // 0x28
		::System::Single GiftDelayTime; // 0x2C
		::System::UInt32 SpineAnimGroupId; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveQuestionOptionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
