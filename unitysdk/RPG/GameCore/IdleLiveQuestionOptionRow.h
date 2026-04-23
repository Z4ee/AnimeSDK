#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveQuestionOptionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A13FD0)
#define RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A14280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionOptionRow_TypeDefinitionIndex = 11268;

	class IdleLiveQuestionOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialChatList; // 0x10
		::Il2CppArray<::System::UInt32>* GiftIDList; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::GameCore::IdleLiveQuestionOptionType Type; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::Single GiftDelayTime; // 0x30
		::System::UInt32 SpineAnimGroupId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveQuestionOptionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
