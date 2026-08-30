#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB3A950)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB3A990)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameSettleInfoWindow___c_TypeDefinitionIndex = 80019;

	class ChenLingFesGameSettleInfoWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesGameSettleInfoWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesGameSettleInfoWindow___c_TypeDefinitionIndex)->GetStaticField(0x34860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMESETTLEINFOWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
