#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_METHOD_3_A688AD229480E996_OFFSET UNITYSDK_OFFSET(0x1D5E9210)
#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_METHOD_3_EB3DDBA0DB87B62D_OFFSET UNITYSDK_OFFSET(0x1D5E91D0)
#define RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E9200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelShipWaitNavigationArrive_TypeDefinitionIndex = 20742;

	class TravelShipWaitNavigationArrive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaAnchorName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnArrive; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB3DDBA0DB87B62D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipWaitNavigationArrive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_METHOD_3_EB3DDBA0DB87B62D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A688AD229480E996(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TravelShipWaitNavigationArrive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TravelShipWaitNavigationArrive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELSHIPWAITNAVIGATIONARRIVE_METHOD_3_A688AD229480E996_OFFSET))(a1, a2);
		}
	};
}
