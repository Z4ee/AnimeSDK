#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCF88C0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF8900)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGamePrepareWindow___c_TypeDefinitionIndex = 78751;

	class PixAirGamePrepareWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirGamePrepareWindow___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirGamePrepareWindow___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirGamePrepareWindow___c_TypeDefinitionIndex)->GetStaticField(0x5FB90);
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
