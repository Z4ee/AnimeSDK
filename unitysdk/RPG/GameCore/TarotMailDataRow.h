#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTMAILDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1432F0)
#define RPG_GAMECORE_TAROTMAILDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C143650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotMailDataRow_TypeDefinitionIndex = 14640;

	class TarotMailDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MailSentenceIDList; // 0x10
		::RPG::Client::TextID To; // 0x18
		::RPG::Client::TextID From; // 0x28
		::System::Boolean IsSpecial; // 0x38
		::System::UInt32 ID; // 0x3C
		::RPG::Client::TextID Title; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotMailDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotMailDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
