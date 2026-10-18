#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetLineupShape.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IMutablePetLineup; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_PET_PETLINEUP_CLONEMUTABLE_OFFSET UNITYSDK_OFFSET(0xDAB9FC0)
#define RPG_CLIENT_PET_PETLINEUP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDABA140)
#define RPG_CLIENT_PET_PETLINEUP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDABA270)
#define RPG_CLIENT_PET_PETLINEUP_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xDABA540)
#define RPG_CLIENT_PET_PETLINEUP_GET_SLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xDABA4F0)
#define RPG_CLIENT_PET_PETLINEUP_SET_OFFSET UNITYSDK_OFFSET(0xDAB9F40)
#define RPG_CLIENT_PET_PETLINEUP_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0xDABA550)
#define RPG_CLIENT_PET_PETLINEUP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDABA1D0)
#define RPG_CLIENT_PET_PETLINEUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0xDAB9EA0)
#define RPG_CLIENT_PET_PETLINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB9D80)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetLineup_TypeDefinitionIndex = 75686;

	class PetLineup : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::Pet::PetInstanceIdentifier>* _Slots; // 0x10
		::System::WeakReference_1<::RPG::Client::Pet::IPetInstanceRepository*>* _RepositoryRef; // 0x18
		::RPG::Client::Pet::PetLineupShape _Shape_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::Pet::IPetInstanceRepository* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Pet::IPetInstanceRepository*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::WeakReference_1<::RPG::Client::Pet::IPetInstanceRepository*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::WeakReference_1<::RPG::Client::Pet::IPetInstanceRepository*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::System::UInt32 a1, ::RPG::Client::Pet::PetInstanceIdentifier a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP_SET_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Pet::IMutablePetLineup* CloneMutable()
		{
			return ((::RPG::Client::Pet::IMutablePetLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP_CLONEMUTABLE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::Pet::IPetInstance*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetInstance* get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP_GET_ITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP_GET_SLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::Pet::PetLineupShape get_Shape()
		{
			return ((::RPG::Client::Pet::PetLineupShape(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_Shape(::RPG::Client::Pet::PetLineupShape a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::PetLineupShape))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP_SET_SHAPE_OFFSET))(this, a1);
		}
	};
}
