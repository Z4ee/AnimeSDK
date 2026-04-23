#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EC2E30)
#define RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC3130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEventOptionRow_TypeDefinitionIndex = 11792;

	class SwordTrainingEventOptionRow : public ::System::Object
	{
	public:
		::System::String* ResultAudio; // 0x10
		::System::String* ResultImage; // 0x18
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x20
		::System::UInt32 OptionID; // 0x28
		::RPG::Client::TextID ResultDesc; // 0x30
		::RPG::Client::TextID OptionDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingEventOptionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingEventOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
