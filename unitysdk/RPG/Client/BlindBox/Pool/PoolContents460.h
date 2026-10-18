#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_246CF74A8E4C9EFC;
namespace RPG::Client::BlindBox::Pool { class IPoolContentEntry460; }
namespace RPG::Client::BlindBox::Pool { class IPoolContentEntry; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_CAROUSELPETS_OFFSET UNITYSDK_OFFSET(0xC8871C0)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_CHIMERAENTRY_OFFSET UNITYSDK_OFFSET(0xC887160)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_CHROMACHIMERAENTRY_OFFSET UNITYSDK_OFFSET(0xC887170)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_CHROMARACCOONENTRY_OFFSET UNITYSDK_OFFSET(0xC887150)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0xC887180)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_RACCOONENTRY_OFFSET UNITYSDK_OFFSET(0xC887140)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460__CTOR_OFFSET UNITYSDK_OFFSET(0xC886960)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int PoolContents460_TypeDefinitionIndex = 74930;

	class PoolContents460 : public ::System::Object
	{
	public:
		::RPG::Client::BlindBox::Pool::IPoolContentEntry460* _ChimeraEntry_k__BackingField; // 0x10
		::RPG::Client::BlindBox::Pool::IPoolContentEntry460* _ChromaRaccoonEntry_k__BackingField; // 0x18
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* _CarouselPetsReadOnly; // 0x20
		::RPG::Client::BlindBox::Pool::IPoolContentEntry460* _ChromaChimeraEntry_k__BackingField; // 0x28
		::Il2CppArray<::RPG::Client::BlindBox::Pool::IPoolContentEntry*>* _Entries; // 0x30
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::BlindBox::Pool::IPoolContentEntry*>* _EntriesReadOnly; // 0x38
		::Il2CppArray<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* _CarouselPets; // 0x40
		::RPG::Client::BlindBox::Pool::IPoolContentEntry460* _RaccoonEntry_k__BackingField; // 0x48

		::System::Void _ctor(::RPG::Client::BlindBox::Pool::IPoolContentEntry460* a1, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460* a2, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460* a3, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460* a4, ::Class_3_246CF74A8E4C9EFC* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460*, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460*, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460*, ::RPG::Client::BlindBox::Pool::IPoolContentEntry460*, ::Class_3_246CF74A8E4C9EFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::BlindBox::Pool::IPoolContentEntry460* get_RaccoonEntry()
		{
			return ((::RPG::Client::BlindBox::Pool::IPoolContentEntry460*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_RACCOONENTRY_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::IPoolContentEntry460* get_ChromaRaccoonEntry()
		{
			return ((::RPG::Client::BlindBox::Pool::IPoolContentEntry460*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_CHROMARACCOONENTRY_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::IPoolContentEntry460* get_ChimeraEntry()
		{
			return ((::RPG::Client::BlindBox::Pool::IPoolContentEntry460*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_CHIMERAENTRY_OFFSET))(this);
		}

		::RPG::Client::BlindBox::Pool::IPoolContentEntry460* get_ChromaChimeraEntry()
		{
			return ((::RPG::Client::BlindBox::Pool::IPoolContentEntry460*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_CHROMACHIMERAENTRY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::BlindBox::Pool::IPoolContentEntry*>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::BlindBox::Pool::IPoolContentEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_ENTRIES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* get_CarouselPets()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460_GET_CAROUSELPETS_OFFSET))(this);
		}
	};
}
