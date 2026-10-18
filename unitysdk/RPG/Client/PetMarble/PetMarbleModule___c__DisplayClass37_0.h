#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8D0328A5262604F3;
namespace System { class String; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE6890)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__DISPLAYCLASS37_0___ONPETMARBLEPVELEVELBEGINSTAT_B__0_OFFSET UNITYSDK_OFFSET(0xDAE6BE0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleModule___c__DisplayClass37_0_TypeDefinitionIndex = 74721;

	class PetMarbleModule___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::Class_1_8D0328A5262604F3* ntf; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnPetMarblePveLevelBeginStat_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMODULE___C__DISPLAYCLASS37_0___ONPETMARBLEPVELEVELBEGINSTAT_B__0_OFFSET))(this, a1);
		}
	};
}
