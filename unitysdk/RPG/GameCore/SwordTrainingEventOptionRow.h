#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1779CBD0)
#define RPG_GAMECORE_SWORDTRAININGEVENTOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1779CED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEventOptionRow_TypeDefinitionIndex = 11390;

	class SwordTrainingEventOptionRow : public ::System::Object
	{
	public:
		::System::String* ResultAudio; // 0x10
		::System::String* ResultImage; // 0x18
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x20
		::RPG::Client::TextID OptionDesc; // 0x28
		::System::UInt32 OptionID; // 0x38
		::RPG::Client::TextID ResultDesc; // 0x40

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
