#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3BA2D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3BA310)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xC3BA320)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipAssembleViewModel___c_TypeDefinitionIndex = 73576;

	class PixAirEquipAssembleViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirEquipAssembleViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirEquipAssembleViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipAssembleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x6A30);
		}
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipAssembleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x6A38);
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
