#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_ADD_OFFSET UNITYSDK_OFFSET(0xDAB71E0)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0xDAB7420)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_CONTAINS_OFFSET UNITYSDK_OFFSET(0xDAB37B0)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_FINDBYPETIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDAB3620)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_GETALL_OFFSET UNITYSDK_OFFSET(0xDAB3D10)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xDAB7070)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_GET__DEBUGINSTANCES_OFFSET UNITYSDK_OFFSET(0xDAB74B0)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_REMOVE_OFFSET UNITYSDK_OFFSET(0xDAB7380)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY_TRYGET_OFFSET UNITYSDK_OFFSET(0xDAB7110)
#define RPG_CLIENT_PET_PETINSTANCEREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB75E0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetInstanceRepository_TypeDefinitionIndex = 75684;

	class PetInstanceRepository : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Pet::PetInstanceIdentifier, ::RPG::Client::Pet::IPetInstance*>* _Instances; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetInstance* Get(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_GET_OFFSET))(this, a1);
		}

		::System::Boolean TryGet(::RPG::Client::Pet::PetInstanceIdentifier a1, ::RPG::Client::Pet::IPetInstance*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier, ::RPG::Client::Pet::IPetInstance*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_TRYGET_OFFSET))(this, a1, a2);
		}

		::System::Boolean Contains(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_CONTAINS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* FindByPetIdentifier(::RPG::Client::Pet::PetIdentifier a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_FINDBYPETIDENTIFIER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* GetAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_GETALL_OFFSET))(this);
		}

		::System::Void Add(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_ADD_OFFSET))(this, a1);
		}

		::System::Void Remove(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_CLEAR_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::Pet::IPetInstance*>* get__DebugInstances()
		{
			return ((::Il2CppArray<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETINSTANCEREPOSITORY_GET__DEBUGINSTANCES_OFFSET))(this);
		}
	};
}
