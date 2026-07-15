#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PETINSTANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F4C9C0)
#define RPG_CLIENT_PETINSTANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4C9F0)
#define RPG_CLIENT_PETINSTANCE___C__TRYCREATEPETENTITY_B__4_0_OFFSET UNITYSDK_OFFSET(0x17F4CA10)
#define RPG_CLIENT_PETINSTANCE___C__TRYDESTROYPETENTITY_B__3_0_OFFSET UNITYSDK_OFFSET(0x17F4CA00)

namespace RPG::Client
{
	inline static constexpr unsigned int PetInstance___c_TypeDefinitionIndex = 63501;

	class PetInstance___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PetInstance___c_TypeDefinitionIndex)->GetStaticField(0x65D30);
		}
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PetInstance___c_TypeDefinitionIndex)->GetStaticField(0x65D38);
		}
		static ::RPG::Client::PetInstance___c** StaticGet___9()
		{
			return (::RPG::Client::PetInstance___c**)Il2CppClass::FromTypeDefinitionIndex(PetInstance___c_TypeDefinitionIndex)->GetStaticField(0x65D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryDestroyPetEntity_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE___C__TRYDESTROYPETENTITY_B__3_0_OFFSET))(this);
		}

		::System::Void _TryCreatePetEntity_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETINSTANCE___C__TRYCREATEPETENTITY_B__4_0_OFFSET))(this);
		}
	};
}
