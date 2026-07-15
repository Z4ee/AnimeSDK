#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0DB010)
#define RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DB050)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirPlaneStatusControl___c_TypeDefinitionIndex = 75218;

	class PixAirPlaneStatusControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirPlaneStatusControl___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirPlaneStatusControl___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirPlaneStatusControl___c_TypeDefinitionIndex)->GetStaticField(0x68210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRPLANESTATUSCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
