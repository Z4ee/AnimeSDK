#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PET_PETMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAB7080)
#define RPG_CLIENT_PET_PETMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB70C0)
#define RPG_CLIENT_PET_PETMODULE___C___ONRECALLPETSCRSP_B__33_1_OFFSET UNITYSDK_OFFSET(0xDAB70E0)
#define RPG_CLIENT_PET_PETMODULE___C___ONSUMMONPETSCRSP_B__32_1_OFFSET UNITYSDK_OFFSET(0xDAB70D0)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule___c_TypeDefinitionIndex = 75690;

	class PetModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PetModule___c_TypeDefinitionIndex)->GetStaticField(0x15440);
		}
		static ::System::Action** StaticGet___9__32_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PetModule___c_TypeDefinitionIndex)->GetStaticField(0x15448);
		}
		static ::RPG::Client::Pet::PetModule___c** StaticGet___9()
		{
			return (::RPG::Client::Pet::PetModule___c**)Il2CppClass::FromTypeDefinitionIndex(PetModule___c_TypeDefinitionIndex)->GetStaticField(0x15450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnSummonPetScRsp_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C___ONSUMMONPETSCRSP_B__32_1_OFFSET))(this);
		}

		::System::Void __OnRecallPetScRsp_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE___C___ONRECALLPETSCRSP_B__33_1_OFFSET))(this);
		}
	};
}
