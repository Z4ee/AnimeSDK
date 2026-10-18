#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class IPoolContentEntry; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC887200)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC887240)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xC887250)
#define RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0xC8872A0)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int PoolContents460___c_TypeDefinitionIndex = 74931;

	class PoolContents460___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BlindBox::Pool::PoolContents460___c** StaticGet___9()
		{
			return (::RPG::Client::BlindBox::Pool::PoolContents460___c**)Il2CppClass::FromTypeDefinitionIndex(PoolContents460___c_TypeDefinitionIndex)->GetStaticField(0x63BA0);
		}
		static ::System::Func_2<::RPG::Client::BlindBox::Pool::IPoolContentEntry*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::BlindBox::Pool::IPoolContentEntry*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*>**)Il2CppClass::FromTypeDefinitionIndex(PoolContents460___c_TypeDefinitionIndex)->GetStaticField(0x63BA8);
		}
		static ::System::Func_2<::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::PetIdentifier>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::PetIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(PoolContents460___c_TypeDefinitionIndex)->GetStaticField(0x63BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* __ctor_b__0_0(::RPG::Client::BlindBox::Pool::IPoolContentEntry* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IPoolContentEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::PetIdentifier __ctor_b__0_1(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::RPG::Client::Pet::PetIdentifier(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_POOLCONTENTS460___C___CTOR_B__0_1_OFFSET))(this, a1);
		}
	};
}
