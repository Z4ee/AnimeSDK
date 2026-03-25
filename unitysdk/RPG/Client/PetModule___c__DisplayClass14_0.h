#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_76;
namespace RPG::Client { class PetModule; }

#define RPG_CLIENT_PETMODULE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F37820)
#define RPG_CLIENT_PETMODULE___C__DISPLAYCLASS14_0___ONCMDSUMMONPETSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x9F38410)

namespace RPG::Client
{
	inline static constexpr unsigned int PetModule___c__DisplayClass14_0_TypeDefinitionIndex = 54051;

	class PetModule___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::PetModule* __4__this; // 0x10
		::Class_1_120319518E6F6581_76* rsp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnCmdSummonPetScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMODULE___C__DISPLAYCLASS14_0___ONCMDSUMMONPETSCRSP_B__0_OFFSET))(this);
		}
	};
}
