#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }

#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_APPEARANCEID_OFFSET UNITYSDK_OFFSET(0xDAB2620)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0xDAB2460)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHROMA_OFFSET UNITYSDK_OFFSET(0xDAB0CF0)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0xDAB2220)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISRACCOON_OFFSET UNITYSDK_OFFSET(0xDAB22A0)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int IBlindBoxPetExtensions_TypeDefinitionIndex = 75743;

	class IBlindBoxPetExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsHidden(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISHIDDEN_OFFSET))(a1);
		}

		static ::System::Boolean IsRaccoon(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISRACCOON_OFFSET))(a1);
		}

		static ::System::Boolean IsChimera(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHIMERA_OFFSET))(a1);
		}

		static ::System::Boolean IsChroma(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHROMA_OFFSET))(a1);
		}

		static ::System::UInt32 AppearanceId(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_APPEARANCEID_OFFSET))(a1);
		}
	};
}
