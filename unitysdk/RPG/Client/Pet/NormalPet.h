#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet { class SimplePetAppearance; }

#define RPG_CLIENT_PET_NORMALPET_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAAB3F0)
#define RPG_CLIENT_PET_NORMALPET_GET_BACKGROUNDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAAB3C0)
#define RPG_CLIENT_PET_NORMALPET_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAAB3B0)
#define RPG_CLIENT_PET_NORMALPET_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAAB240)
#define RPG_CLIENT_PET_NORMALPET_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xDAAB340)
#define RPG_CLIENT_PET_NORMALPET_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAAB3A0)
#define RPG_CLIENT_PET_NORMALPET_GET_PETID_OFFSET UNITYSDK_OFFSET(0xDAAB330)
#define RPG_CLIENT_PET_NORMALPET_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDAAB3D0)
#define RPG_CLIENT_PET_NORMALPET_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDAAB350)
#define RPG_CLIENT_PET_NORMALPET__CTOR_OFFSET UNITYSDK_OFFSET(0xDAAB1B0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int NormalPet_TypeDefinitionIndex = 75666;

	class NormalPet : public ::System::Object
	{
	public:
		::RPG::Client::Pet::SimplePetAppearance* _Appearance; // 0x10
		::RPG::Client::Pet::PetRarity _Rarity_k__BackingField; // 0x18
		::RPG::Client::TextID _BackgroundDescription_k__BackingField; // 0x40
		::RPG::Client::TextID _Description_k__BackingField; // 0x50
		::RPG::Client::TextID _Name_k__BackingField; // 0x60
		::System::UInt32 _PetId_k__BackingField; // 0x70
		::System::UInt32 _ItemId_k__BackingField; // 0x74

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::RPG::Client::TextID a5, ::RPG::Client::Pet::SimplePetAppearance* a6, ::RPG::Client::Pet::PetRarity a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::Pet::SimplePetAppearance*, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::Client::Pet::PetIdentifier get_Identifier()
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_PetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_PETID_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::Pet::PetType get_Type()
		{
			return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_DESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_BackgroundDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_BACKGROUNDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::Pet::PetRarity get_Rarity()
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_Appearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPET_GET_APPEARANCE_OFFSET))(this);
		}
	};
}
