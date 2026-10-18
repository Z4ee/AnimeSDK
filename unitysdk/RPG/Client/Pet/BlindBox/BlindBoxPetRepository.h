#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GETALLAPPEARANCES_OFFSET UNITYSDK_OFFSET(0xDAA6890)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GETALL_OFFSET UNITYSDK_OFFSET(0xDAA7120)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GETDEFAULTAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA6840)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GET_OFFSET UNITYSDK_OFFSET(0xDAA66F0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GET__DEBUGPETS_OFFSET UNITYSDK_OFFSET(0xDAA7250)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_HASCHROMAAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAA6BF0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_TRYGET_OFFSET UNITYSDK_OFFSET(0xDAA6FB0)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY__CTOR_OFFSET UNITYSDK_OFFSET(0xDAA7380)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY__ENSUREFULL_OFFSET UNITYSDK_OFFSET(0xDAA6B40)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___ENSUREFULL_B__6_0_OFFSET UNITYSDK_OFFSET(0xDAA7400)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetRepository_TypeDefinitionIndex = 75731;

	class BlindBoxPetRepository : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* _PetCache; // 0x10
		::System::Boolean _IsFull; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPet* Get(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GET_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPet* GetDefaultAppearance(::System::UInt32 a1)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GETDEFAULTAPPEARANCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* GetAllAppearances(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GETALLAPPEARANCES_OFFSET))(this, a1);
		}

		::System::Boolean HasChromaAppearance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_HASCHROMAAPPEARANCE_OFFSET))(this, a1);
		}

		::System::Boolean TryGet(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_TRYGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* GetAll()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GETALL_OFFSET))(this);
		}

		::System::Void _EnsureFull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY__ENSUREFULL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* get__DebugPets()
		{
			return ((::Il2CppArray<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY_GET__DEBUGPETS_OFFSET))(this);
		}

		::System::Boolean __EnsureFull_b__6_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETREPOSITORY___ENSUREFULL_B__6_0_OFFSET))(this, a1, a2);
		}
	};
}
