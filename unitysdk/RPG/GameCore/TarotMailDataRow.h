#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTMAILDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFD410)
#define RPG_GAMECORE_TAROTMAILDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFD770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotMailDataRow_TypeDefinitionIndex = 14465;

	class TarotMailDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MailSentenceIDList; // 0x10
		::RPG::Client::TextID To; // 0x18
		::System::Boolean IsSpecial; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID From; // 0x30
		::RPG::Client::TextID Title; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotMailDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotMailDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
