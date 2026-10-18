#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET_BLINDBOXTYPENAME_OFFSET UNITYSDK_OFFSET(0xC88DDE0)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC88DDD0)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET_PETS_OFFSET UNITYSDK_OFFSET(0xC88DE00)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET_PROBABILITYDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xC88DDF0)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET__DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0xC88DE40)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460__CTOR_OFFSET UNITYSDK_OFFSET(0xC88DC30)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int PoolContentEntry460_TypeDefinitionIndex = 74930;

	class PoolContentEntry460 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* _Pets; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* _PetsReadOnly; // 0x18
		::RPG::Client::TextID _BlindBoxTypeName_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x30
		::RPG::Client::TextID _ProbabilityDescription_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_BlindBoxTypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET_BLINDBOXTYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProbabilityDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET_PROBABILITYDESCRIPTION_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* get_Pets()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET_PETS_OFFSET))(this);
		}

		::System::String* get__DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTENTRY460_GET__DEBUGGERDISPLAY_OFFSET))(this);
		}
	};
}
