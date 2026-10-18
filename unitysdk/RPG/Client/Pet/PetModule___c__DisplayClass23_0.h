#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60E3B7F7BA004DCE_4;
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDABDAC0)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0___ONGETPETDATASCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xDAC0BA0)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0___ONGETPETDATASCRSP_B__1_OFFSET UNITYSDK_OFFSET(0xDAC0BD0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass23_0_TypeDefinitionIndex = 75693;

	class PetModule___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::Class_1_60E3B7F7BA004DCE_4* rsp; // 0x10
		::RPG::Client::Pet::PetModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnGetPetDataScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0___ONGETPETDATASCRSP_B__0_OFFSET))(this);
		}

		::System::Void __OnGetPetDataScRsp_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_0___ONGETPETDATASCRSP_B__1_OFFSET))(this);
		}
	};
}
