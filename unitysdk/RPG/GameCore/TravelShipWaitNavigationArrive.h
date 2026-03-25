#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_METHOD_3_2B342535E0AE1417_OFFSET UNITYSDK_OFFSET(0x178B7EA0)
#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_METHOD_3_A688AD229480E996_OFFSET UNITYSDK_OFFSET(0x178B7F20)
#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x178B7EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipWaitNavigationArrive_TypeDefinitionIndex = 19310;

	class TravelShipWaitNavigationArrive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaAnchorName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnArrive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B342535E0AE1417(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipWaitNavigationArrive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_METHOD_3_2B342535E0AE1417_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A688AD229480E996(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipWaitNavigationArrive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_METHOD_3_A688AD229480E996_OFFSET))(a1, a2);
		}
	};
}
