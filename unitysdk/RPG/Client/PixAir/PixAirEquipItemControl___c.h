#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAFB350)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAFB390)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipItemControl___c_TypeDefinitionIndex = 78749;

	class PixAirEquipItemControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirEquipItemControl___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirEquipItemControl___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirEquipItemControl___c_TypeDefinitionIndex)->GetStaticField(0x594E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPITEMCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
