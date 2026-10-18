#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38EDFE5CA7B8A5B6_3;
namespace RPG::Client::Pet { class PetModule___c__DisplayClass23_0; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_2__CTOR_OFFSET UNITYSDK_OFFSET(0xDABDAE0)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_2___ONGETPETDATASCRSP_B__3_OFFSET UNITYSDK_OFFSET(0xDAC0C30)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass23_2_TypeDefinitionIndex = 75695;

	class PetModule___c__DisplayClass23_2 : public ::System::Object
	{
	public:
		::Class_1_38EDFE5CA7B8A5B6_3* protoBlindBoxPet; // 0x10
		::RPG::Client::Pet::PetModule___c__DisplayClass23_0* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_2__CTOR_OFFSET))(this);
		}

		::System::Void __OnGetPetDataScRsp_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS23_2___ONGETPETDATASCRSP_B__3_OFFSET))(this);
		}
	};
}
