#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_METHOD_3_24E1C7A1F2C5110A_OFFSET UNITYSDK_OFFSET(0x19C27BC0)
#define RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_METHOD_3_5F09B6EDC83CB053_OFFSET UNITYSDK_OFFSET(0x19C27B40)
#define RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C27B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAllMissionWaypointsVisiable_TypeDefinitionIndex = 19728;

	class SetAllMissionWaypointsVisiable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsVisiable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F09B6EDC83CB053(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAllMissionWaypointsVisiable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAllMissionWaypointsVisiable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_METHOD_3_5F09B6EDC83CB053_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24E1C7A1F2C5110A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAllMissionWaypointsVisiable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAllMissionWaypointsVisiable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLMISSIONWAYPOINTSVISIABLE_METHOD_3_24E1C7A1F2C5110A_OFFSET))(a1, a2);
		}
	};
}
