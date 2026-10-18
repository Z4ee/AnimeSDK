#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PET_NORMALPETREPOSITORY_GETALL_OFFSET UNITYSDK_OFFSET(0xDAAC350)
#define RPG_CLIENT_PET_NORMALPETREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xDAAC130)
#define RPG_CLIENT_PET_NORMALPETREPOSITORY_GET__DEBUGPETS_OFFSET UNITYSDK_OFFSET(0xDAAC530)
#define RPG_CLIENT_PET_NORMALPETREPOSITORY_TRYGET_OFFSET UNITYSDK_OFFSET(0xDAAC230)
#define RPG_CLIENT_PET_NORMALPETREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xDAAC660)
#define RPG_CLIENT_PET_NORMALPETREPOSITORY__ENSUREFULL_OFFSET UNITYSDK_OFFSET(0xDAAC480)
#define RPG_CLIENT_PET_NORMALPETREPOSITORY___ENSUREFULL_B__3_0_OFFSET UNITYSDK_OFFSET(0xDAAC6E0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int NormalPetRepository_TypeDefinitionIndex = 75671;

	class NormalPetRepository : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::IPet*>* _PetCache; // 0x10
		::System::Boolean _IsFull; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETREPOSITORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::Pet::IPet* Get(::System::UInt32 a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETREPOSITORY_GET_OFFSET))(this, a1);
		}

		::System::Boolean TryGet(::System::UInt32 a1, ::RPG::Client::Pet::IPet*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::Pet::IPet*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETREPOSITORY_TRYGET_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPet*>* GetAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETREPOSITORY_GETALL_OFFSET))(this);
		}

		::System::Void _EnsureFull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETREPOSITORY__ENSUREFULL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::Pet::IPet*>* get__DebugPets()
		{
			return ((::Il2CppArray<::RPG::Client::Pet::IPet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETREPOSITORY_GET__DEBUGPETS_OFFSET))(this);
		}

		::System::Boolean __EnsureFull_b__3_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_NORMALPETREPOSITORY___ENSUREFULL_B__3_0_OFFSET))(this, a1);
		}
	};
}
