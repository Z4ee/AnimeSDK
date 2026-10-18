#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet::BlindBox { class BlindBoxPetAppearance; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetAppearance; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_CREATECHROMA_OFFSET UNITYSDK_OFFSET(0xDAA4B90)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_CREATE_OFFSET UNITYSDK_OFFSET(0xDAA4900)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA4F00)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_BACKGROUNDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAA5050)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_BLINDBOXTYPE_OFFSET UNITYSDK_OFFSET(0xDAA5010)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_CHROMAAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA5130)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_DEFAULTAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA50F0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAA5040)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAA4E30)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xDAA4FB0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAA5030)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_PETID_OFFSET UNITYSDK_OFFSET(0xDAA4FA0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDAA5060)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDAA4FC0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_RPG_CLIENT_PET_IPET_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA5080)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET__CTOR_OFFSET UNITYSDK_OFFSET(0xDAA4800)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPet_TypeDefinitionIndex = 75720;

	class BlindBoxPet : public ::System::Object
	{
	public:
		::RPG::Client::Pet::PetRarity _Rarity_k__BackingField; // 0x10
		::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance* _DefaultAppearance; // 0x38
		::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance* _ChromaAppearance; // 0x40
		::RPG::Client::TextID _Name_k__BackingField; // 0x48
		::RPG::Client::TextID _Description_k__BackingField; // 0x58
		::RPG::Client::TextID _BackgroundDescription_k__BackingField; // 0x68
		::System::UInt32 _PetId_k__BackingField; // 0x78
		::System::UInt32 _ItemId_k__BackingField; // 0x7C
		::RPG::Client::Pet::BlindBox::BlindBoxPetType _BlindBoxType_k__BackingField; // 0x80

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::RPG::Client::TextID a5, ::RPG::Client::Pet::BlindBox::BlindBoxPetType a6, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance* a7, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance* a8, ::RPG::Client::Pet::PetRarity a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance*, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance*, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::RPG::Client::Pet::BlindBox::BlindBoxPet* Create(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::RPG::Client::TextID a5, ::RPG::Client::Pet::BlindBox::BlindBoxPetType a6, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance* a7, ::RPG::Client::Pet::PetRarity a8)
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPet*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance*, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::Client::Pet::BlindBox::BlindBoxPet* CreateChroma(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::RPG::Client::TextID a5, ::RPG::Client::Pet::BlindBox::BlindBoxPetType a6, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance* a7, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance* a8, ::RPG::Client::Pet::PetRarity a9)
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPet*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::Pet::BlindBox::BlindBoxPetType, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance*, ::RPG::Client::Pet::BlindBox::BlindBoxPetAppearance*, ::RPG::Client::Pet::PetRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_CREATECHROMA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::RPG::Client::Pet::PetIdentifier get_Identifier()
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_PetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_PETID_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::Pet::PetType get_Type()
		{
			return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetType get_BlindBoxType()
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_BLINDBOXTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_DESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_BackgroundDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_BACKGROUNDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::Pet::PetRarity get_Rarity()
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* get_Appearance()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_APPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* RPG_Client_Pet_IPet_get_Appearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_RPG_CLIENT_PET_IPET_GET_APPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* get_DefaultAppearance()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_DEFAULTAPPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* get_ChromaAppearance()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPET_GET_CHROMAAPPEARANCE_OFFSET))(this);
		}
	};
}
