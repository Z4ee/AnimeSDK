#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetInstance; }

#define RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETINSTANCEEXTENSIONS_ISCHROMAEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xDAB27B0)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int IBlindBoxPetInstanceExtensions_TypeDefinitionIndex = 75745;

	class IBlindBoxPetInstanceExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsChromaEffective(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_IBLINDBOXPETINSTANCEEXTENSIONS_ISCHROMAEFFECTIVE_OFFSET))(a1);
		}
	};
}
