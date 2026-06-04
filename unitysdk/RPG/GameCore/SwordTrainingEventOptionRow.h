#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CE2C50)
#define RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE2F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEventOptionRow_TypeDefinitionIndex = 11889;

	class SwordTrainingEventOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::System::String* ResultImage; // 0x18
		::System::String* ResultAudio; // 0x20
		::RPG::Client::TextID OptionDesc; // 0x28
		::RPG::Client::TextID ResultDesc; // 0x38
		::System::UInt32 OptionID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingEventOptionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingEventOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
