#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C837460)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8374A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C8374B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipAssembleViewModel___c_TypeDefinitionIndex = 78772;

	class PixAirEquipAssembleViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirEquipAssembleViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirEquipAssembleViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipAssembleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5ED40);
		}
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipAssembleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5ED48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
