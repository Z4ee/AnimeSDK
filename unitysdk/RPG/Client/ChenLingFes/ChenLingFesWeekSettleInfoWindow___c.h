#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA77700)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA77740)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesWeekSettleInfoWindow___c_TypeDefinitionIndex = 76388;

	class ChenLingFesWeekSettleInfoWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesWeekSettleInfoWindow___c_TypeDefinitionIndex)->GetStaticField(0x66BC0);
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
