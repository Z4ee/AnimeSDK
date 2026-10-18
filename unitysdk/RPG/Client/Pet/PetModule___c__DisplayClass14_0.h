#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetInstance; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDABBF40)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS14_0__ISPETSUMMONED_B__0_OFFSET UNITYSDK_OFFSET(0xDAC0970)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass14_0_TypeDefinitionIndex = 75692;

	class PetModule___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::Pet::IPetInstance* petInstance; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPetSummoned_b__0(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS14_0__ISPETSUMMONED_B__0_OFFSET))(this, a1);
		}
	};
}
