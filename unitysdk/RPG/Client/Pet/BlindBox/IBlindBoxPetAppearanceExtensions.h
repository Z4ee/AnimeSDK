#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetAppearance; }

#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETAPPEARANCEEXTENSIONS_ISCHROMA_OFFSET UNITYSDK_OFFSET(0xDAB21D0)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int IBlindBoxPetAppearanceExtensions_TypeDefinitionIndex = 75742;

	class IBlindBoxPetAppearanceExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsChroma(::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETAPPEARANCEEXTENSIONS_ISCHROMA_OFFSET))(a1);
		}
	};
}
