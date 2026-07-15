#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGPARTNERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B43F880)
#define RPG_GAMECORE_SWORDTRAININGPARTNERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B440160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingPartnerRow_TypeDefinitionIndex = 11964;

	class SwordTrainingPartnerRow : public ::System::Object
	{
	public:
		::System::String* PartnerImage; // 0x10
		::Il2CppArray<::System::UInt32>* PartnerAbilityIDList; // 0x18
		::RPG::Client::TextID PartnerName; // 0x20
		::System::UInt32 PartnerID; // 0x30
		::System::UInt32 AvatarID; // 0x34
		::System::UInt32 UnlockID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingPartnerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingPartnerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGPARTNERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
