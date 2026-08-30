#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCB7D120)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCB7D160)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesWeekSettleInfoWindow___c_TypeDefinitionIndex = 80022;

	class ChenLingFesWeekSettleInfoWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesWeekSettleInfoWindow___c_TypeDefinitionIndex)->GetStaticField(0x38E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
