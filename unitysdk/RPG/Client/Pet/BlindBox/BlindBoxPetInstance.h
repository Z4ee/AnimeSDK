#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetAppearance; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA5F70)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_BACKGROUNDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAA5CC0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_BLINDBOXTYPE_OFFSET UNITYSDK_OFFSET(0xDAA5890)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_CHROMAAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA6210)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_DEFAULTAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA60C0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAA5B70)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_EFFECTIVEAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA63B0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAA53C0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_INSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAA65D0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xDAA5630)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAA5A20)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_PETID_OFFSET UNITYSDK_OFFSET(0xDAA54F0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDAA5E10)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDAA5760)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDAA5620)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_RPG_CLIENT_PET_IPETINSTANCE_GET_EFFECTIVEAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA6580)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_RPG_CLIENT_PET_IPET_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA6360)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_SETCHROMAEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xDAA52D0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_SETPROTOTYPE_OFFSET UNITYSDK_OFFSET(0xDAA5320)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xDAA5250)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetInstance_TypeDefinitionIndex = 75728;

	class BlindBoxPetInstance : public ::System::Object
	{
	public:
		::RPG::Client::Pet::BlindBox::IBlindBoxPet* _Prototype; // 0x10
		::System::UInt64 _UniqueId_k__BackingField; // 0x18
		::System::Boolean _IsChromaEffective; // 0x20

		::System::Void _ctor(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetChromaEffective(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_SETCHROMAEFFECTIVE_OFFSET))(this, a1);
		}

		::System::Void SetPrototype(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_SETPROTOTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::PetIdentifier get_Identifier()
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_PetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_PETID_OFFSET))(this);
		}

		::System::UInt64 get_UniqueId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::Pet::PetType get_Type()
		{
			return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::BlindBoxPetType get_BlindBoxType()
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_BLINDBOXTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_DESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_BackgroundDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_BACKGROUNDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::Pet::PetRarity get_Rarity()
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* get_Appearance()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_APPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* get_DefaultAppearance()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_DEFAULTAPPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* get_ChromaAppearance()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_CHROMAAPPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* RPG_Client_Pet_IPet_get_Appearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_RPG_CLIENT_PET_IPET_GET_APPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* get_EffectiveAppearance()
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_EFFECTIVEAPPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* RPG_Client_Pet_IPetInstance_get_EffectiveAppearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_RPG_CLIENT_PET_IPETINSTANCE_GET_EFFECTIVEAPPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::PetInstanceIdentifier get_InstanceIdentifier()
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETINSTANCE_GET_INSTANCEIDENTIFIER_OFFSET))(this);
		}
	};
}
