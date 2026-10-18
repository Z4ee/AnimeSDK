#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_IPETEXTENSIONS_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xDAA9CF0)
#define RPG_CLIENT_PET_IPETEXTENSIONS_ISBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xDAA9680)
#define RPG_CLIENT_PET_IPETEXTENSIONS_ISINSTANCE_OFFSET UNITYSDK_OFFSET(0xDAA9E50)
#define RPG_CLIENT_PET_IPETEXTENSIONS_ISNORMALPET_OFFSET UNITYSDK_OFFSET(0xDAA9550)
#define RPG_CLIENT_PET_IPETEXTENSIONS_ISOWNED_OFFSET UNITYSDK_OFFSET(0xDAA97B0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int IPetExtensions_TypeDefinitionIndex = 75645;

	class IPetExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsNormalPet(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETEXTENSIONS_ISNORMALPET_OFFSET))(a1);
		}

		static ::System::Boolean IsBlindBoxPet(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETEXTENSIONS_ISBLINDBOXPET_OFFSET))(a1);
		}

		static ::System::Boolean IsOwned(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETEXTENSIONS_ISOWNED_OFFSET))(a1);
		}

		static ::System::Boolean IsInstance(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETEXTENSIONS_ISINSTANCE_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::PetModule* get__Module()
		{
			return ((::RPG::Client::Pet::PetModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETEXTENSIONS_GET__MODULE_OFFSET))();
		}
	};
}
