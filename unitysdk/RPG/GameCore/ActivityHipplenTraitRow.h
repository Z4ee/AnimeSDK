#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFE6E0)
#define RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFEB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenTraitRow_TypeDefinitionIndex = 10862;

	class ActivityHipplenTraitRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* TraitUnlockDescParam; // 0x10
		::Il2CppArray<::System::UInt32>* Effects; // 0x18
		::Il2CppArray<::System::Int32>* TraitDescParam; // 0x20
		::System::String* ImagePath; // 0x28
		::RPG::Client::TextID TraitDesc; // 0x30
		::System::UInt32 ID; // 0x40
		::System::Boolean IsEffectDelay; // 0x44
		::RPG::Client::TextID TraitTitle; // 0x48
		::RPG::Client::TextID TraitUnlockDesc; // 0x58
		::System::UInt32 Rarity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenTraitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenTraitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRAITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
