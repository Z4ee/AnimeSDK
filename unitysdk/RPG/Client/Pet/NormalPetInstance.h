#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/Pet/PetType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetAppearance; }

#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_APPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAB5700)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_BACKGROUNDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAB5450)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xDAB5300)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_EFFECTIVEAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAB5830)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAB4CF0)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_INSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAB5880)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xDAB4F50)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAB51B0)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_PETID_OFFSET UNITYSDK_OFFSET(0xDAB4E20)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDAB55A0)
#define RPG_CLIENT_PET_NORMALPETINSTANCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDAB5080)
#define RPG_CLIENT_PET_NORMALPETINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB4CA0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int NormalPetInstance_TypeDefinitionIndex = 75671;

	class NormalPetInstance : public ::System::Object
	{
	public:
		::RPG::Client::Pet::IPet* _Prototype; // 0x10

		::System::Void _ctor(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::PetIdentifier get_Identifier()
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_PetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_PETID_OFFSET))(this);
		}

		::System::UInt32 get_ItemId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_ITEMID_OFFSET))(this);
		}

		::RPG::Client::Pet::PetType get_Type()
		{
			return ((::RPG::Client::Pet::PetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_DESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_BackgroundDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_BACKGROUNDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::Pet::PetRarity get_Rarity()
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_Appearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_APPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* get_EffectiveAppearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_EFFECTIVEAPPEARANCE_OFFSET))(this);
		}

		::RPG::Client::Pet::PetInstanceIdentifier get_InstanceIdentifier()
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETINSTANCE_GET_INSTANCEIDENTIFIER_OFFSET))(this);
		}
	};
}
