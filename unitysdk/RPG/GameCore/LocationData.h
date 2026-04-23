#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormationPriorityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCATIONDATA_METHOD_2_D715B3CDEAA0073A_OFFSET UNITYSDK_OFFSET(0x18A77120)
#define RPG_GAMECORE_LOCATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A77390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LocationData_TypeDefinitionIndex = 16225;

	class LocationData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FormationPriorityType PriorityType; // 0x10
		::RPG::MVector3 LocalPosition; // 0x14
		::System::Single LocalFaceDir; // 0x20
		::System::Boolean OverrideServant; // 0x24
		::RPG::MVector3 ServantPos; // 0x28
		::System::Single ServantFaceDir; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D715B3CDEAA0073A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LocationData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LocationData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONDATA_METHOD_2_D715B3CDEAA0073A_OFFSET))(a1, a2);
		}
	};
}
