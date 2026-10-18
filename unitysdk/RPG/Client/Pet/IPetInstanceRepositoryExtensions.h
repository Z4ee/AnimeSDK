#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_BUILDPETIDCOUNTMAP_OFFSET UNITYSDK_OFFSET(0xDAB3E30)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_COUNTBYPETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAB3940)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_COUNTBYPETID_OFFSET UNITYSDK_OFFSET(0xDAB3B30)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_HASANYBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xDAB4500)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_HASANYPET_OFFSET UNITYSDK_OFFSET(0xDAB4750)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int IPetInstanceRepositoryExtensions_TypeDefinitionIndex = 75651;

	class IPetInstanceRepositoryExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 CountByPetIdentifier(::RPG::Client::Pet::IPetInstanceRepository* a1, ::RPG::Client::Pet::PetIdentifier a2)
		{
			return ((::System::Int32(*)(::RPG::Client::Pet::IPetInstanceRepository*, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_COUNTBYPETIDENTIFIER_OFFSET))(a1, a2);
		}

		static ::System::Int32 CountByPetId(::RPG::Client::Pet::IPetInstanceRepository* a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::RPG::Client::Pet::IPetInstanceRepository*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_COUNTBYPETID_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* BuildPetIdCountMap(::RPG::Client::Pet::IPetInstanceRepository* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_BUILDPETIDCOUNTMAP_OFFSET))(a1);
		}

		static ::System::Boolean HasAnyBlindBoxPet(::RPG::Client::Pet::IPetInstanceRepository* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_HASANYBLINDBOXPET_OFFSET))(a1);
		}

		static ::System::Boolean HasAnyPet(::RPG::Client::Pet::IPetInstanceRepository* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS_HASANYPET_OFFSET))(a1);
		}
	};
}
