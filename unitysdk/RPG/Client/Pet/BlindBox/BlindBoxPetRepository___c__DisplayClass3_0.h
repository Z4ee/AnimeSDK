#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB0810)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__DISPLAYCLASS3_0__HASCHROMAAPPEARANCE_B__0_OFFSET UNITYSDK_OFFSET(0xDAB0F50)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetRepository___c__DisplayClass3_0_TypeDefinitionIndex = 75735;

	class BlindBoxPetRepository___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 petId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasChromaAppearance_b__0(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___C__DISPLAYCLASS3_0__HASCHROMAAPPEARANCE_B__0_OFFSET))(this, a1);
		}
	};
}
