#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B43DCB0)
#define RPG_GAMECORE_SWORDTRAININGEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B43E070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEventRow_TypeDefinitionIndex = 11991;

	class SwordTrainingEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OptionIDList; // 0x10
		::System::String* EventImage; // 0x18
		::RPG::Client::TextID TalkEventText3; // 0x20
		::RPG::Client::TextID EventDesc; // 0x30
		::RPG::Client::TextID TalkEventText1; // 0x40
		::RPG::Client::TextID TalkEventText2; // 0x50
		::System::UInt32 EventID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
