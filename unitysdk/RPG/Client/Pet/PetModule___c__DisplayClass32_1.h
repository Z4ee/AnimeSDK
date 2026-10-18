#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDABF870)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_1___ONSUMMONPETSCRSP_B__2_OFFSET UNITYSDK_OFFSET(0xDAC1170)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass32_1_TypeDefinitionIndex = 75698;

	class PetModule___c__DisplayClass32_1 : public ::System::Object
	{
	public:
		::RPG::Client::Pet::IPetInstance* pet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_1__CTOR_OFFSET))(this);
		}

		::System::Void __OnSummonPetScRsp_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_1___ONSUMMONPETSCRSP_B__2_OFFSET))(this);
		}
	};
}
