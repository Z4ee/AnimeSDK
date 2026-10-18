#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BF8FDF00F218876_30;
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB5FE0)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_0___ONSUMMONPETSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xDAB78C0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass32_0_TypeDefinitionIndex = 75696;

	class PetModule___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::RPG::Client::Pet::PetModule* __4__this; // 0x10
		::Class_1_7BF8FDF00F218876_30* rsp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnSummonPetScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS32_0___ONSUMMONPETSCRSP_B__0_OFFSET))(this);
		}
	};
}
