#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }

#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C__DISPLAYCLASS1_0__COUNTBYPETID_B__0_OFFSET UNITYSDK_OFFSET(0xDAAB0B0)
#define RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDAAA490)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int IPetInstanceRepositoryExtensions___c__DisplayClass1_0_TypeDefinitionIndex = 75652;

	class IPetInstanceRepositoryExtensions___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 petId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CountByPetId_b__0(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEREPOSITORYEXTENSIONS___C__DISPLAYCLASS1_0__COUNTBYPETID_B__0_OFFSET))(this, a1);
		}
	};
}
