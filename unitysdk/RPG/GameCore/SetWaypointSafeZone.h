#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETWAYPOINTSAFEZONE_METHOD_3_A5D3A46C4BEC37B7_OFFSET UNITYSDK_OFFSET(0x19C67300)
#define RPG_GAMECORE_SETWAYPOINTSAFEZONE_METHOD_3_E0DEE00AEA5BE331_OFFSET UNITYSDK_OFFSET(0x19C67260)
#define RPG_GAMECORE_SETWAYPOINTSAFEZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C672C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetWaypointSafeZone_TypeDefinitionIndex = 19727;

	class SetWaypointSafeZone : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Single MarginLeft; // 0x1C
		::System::Single MarginRight; // 0x20
		::System::Single MarginUp; // 0x24
		::System::Single MarginDown; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTSAFEZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0DEE00AEA5BE331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetWaypointSafeZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetWaypointSafeZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTSAFEZONE_METHOD_3_E0DEE00AEA5BE331_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5D3A46C4BEC37B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetWaypointSafeZone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetWaypointSafeZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTSAFEZONE_METHOD_3_A5D3A46C4BEC37B7_OFFSET))(a1, a2);
		}
	};
}
