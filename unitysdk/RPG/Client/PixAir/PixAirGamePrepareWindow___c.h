#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB444C0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDB44500)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGamePrepareWindow___c_TypeDefinitionIndex = 79232;

	class PixAirGamePrepareWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirGamePrepareWindow___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirGamePrepareWindow___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirGamePrepareWindow___c_TypeDefinitionIndex)->GetStaticField(0x1F9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
