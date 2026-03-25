#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKINTERACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D6130)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177D6860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookInteractionRow_TypeDefinitionIndex = 13974;

	class TarotBookInteractionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>* FinishConditionList; // 0x10
		::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>* StartConditionList; // 0x18
		::System::String* JsonPath; // 0x20
		::System::UInt32 Priority; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID Title; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookInteractionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookInteractionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
