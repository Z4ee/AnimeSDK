#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }

#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_APPEARANCEID_OFFSET UNITYSDK_OFFSET(0xDAA8DB0)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0xDAA8BF0)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISCHROMA_OFFSET UNITYSDK_OFFSET(0xDAA7480)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0xDAA89B0)
#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETEXTENSIONS_ISRACCOON_OFFSET UNITYSDK_OFFSET(0xDAA8A30)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int IBlindBoxPetExtensions_TypeDefinitionIndex = 75742;

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
