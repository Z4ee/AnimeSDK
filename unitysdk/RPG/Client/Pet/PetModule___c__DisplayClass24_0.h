#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9FD6FCC0A85ADB51;
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDABE040)
#define RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS24_0___ONPETDATACHANGESCNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0xDAC0C70)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c__DisplayClass24_0_TypeDefinitionIndex = 75696;

	class PetModule___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::Class_1_9FD6FCC0A85ADB51* detail; // 0x10
		::RPG::Client::Pet::PetModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnPetDataChangeScNotify_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__DISPLAYCLASS24_0___ONPETDATACHANGESCNOTIFY_B__0_OFFSET))(this);
		}
	};
}
