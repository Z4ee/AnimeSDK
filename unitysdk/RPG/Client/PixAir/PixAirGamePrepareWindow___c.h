#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0C1A10)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C1A50)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGamePrepareWindow___c_TypeDefinitionIndex = 75204;

	class PixAirGamePrepareWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirGamePrepareWindow___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirGamePrepareWindow___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirGamePrepareWindow___c_TypeDefinitionIndex)->GetStaticField(0x67D30);
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
