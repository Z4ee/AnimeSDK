#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKINTERACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E1C7810)
#define RPG_GAMECORE_TAROTBOOKINTERACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C82A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookInteractionRow_TypeDefinitionIndex = 15068;

	class TarotBookInteractionRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>* FinishConditionList; // 0x18
		::Il2CppArray<::RPG::GameCore::TarotBookConditionParam*>* StartConditionList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 Priority; // 0x2C
		::RPG::Client::TextID Title; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookInteractionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookInteractionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKINTERACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
