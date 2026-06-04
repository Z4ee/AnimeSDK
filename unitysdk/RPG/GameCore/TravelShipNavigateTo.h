#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRAVELSHIPNAVIGATETO_METHOD_3_406B948B0389097C_OFFSET UNITYSDK_OFFSET(0x19E00C60)
#define RPG_GAMECORE_TRAVELSHIPNAVIGATETO_METHOD_3_A72BCFE3EBB727A5_OFFSET UNITYSDK_OFFSET(0x19E00D00)
#define RPG_GAMECORE_TRAVELSHIPNAVIGATETO__CTOR_OFFSET UNITYSDK_OFFSET(0x19E00CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipNavigateTo_TypeDefinitionIndex = 19827;

	class TravelShipNavigateTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaAnchorName; // 0x18
		::System::Boolean AutoStart; // 0x20
		::System::Boolean StopOnArrive; // 0x21
		::System::Boolean ShowToast; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPNAVIGATETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_406B948B0389097C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipNavigateTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipNavigateTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPNAVIGATETO_METHOD_3_406B948B0389097C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A72BCFE3EBB727A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipNavigateTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipNavigateTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPNAVIGATETO_METHOD_3_A72BCFE3EBB727A5_OFFSET))(a1, a2);
		}
	};
}
