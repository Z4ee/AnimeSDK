#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class PetLineup; }

#define RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDAB0D00)
#define RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PET_IPETINSTANCE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAB0D80)
#define RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAB0DE0)
#define RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDAB0D90)
#define RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAB0CF0)
#define RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB0950)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetLineup__GetEnumerator_d__4_TypeDefinitionIndex = 75686;

	class PetLineup__GetEnumerator_d__4 : public ::System::Object
	{
	public:
		::RPG::Client::Pet::PetLineup* __4__this; // 0x10
		::RPG::Client::Pet::IPetInstance* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::UInt32 _i_5__2; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_MOVENEXT_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetInstance* System_Collections_Generic_IEnumerator_RPG_Client_Pet_IPetInstance__get_Current()
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PET_IPETINSTANCE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUP__GETENUMERATOR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
