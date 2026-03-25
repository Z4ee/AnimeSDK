#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WaypointConfig; }

#define RPG_GAMECORE_SETNPCWAYPOINT_METHOD_3_2D25B3D2CD86E4A8_OFFSET UNITYSDK_OFFSET(0x176D9B30)
#define RPG_GAMECORE_SETNPCWAYPOINT_METHOD_3_D743318078D7E41A_OFFSET UNITYSDK_OFFSET(0x176D9A90)
#define RPG_GAMECORE_SETNPCWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D9B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNPCWaypoint_TypeDefinitionIndex = 18575;

	class SetNPCWaypoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupInstanceID; // 0x18
		::Il2CppArray<::RPG::GameCore::WaypointConfig*>* WaypointCfgs; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BehaviourList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D743318078D7E41A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNPCWaypoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNPCWaypoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPOINT_METHOD_3_D743318078D7E41A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D25B3D2CD86E4A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNPCWaypoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNPCWaypoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPOINT_METHOD_3_2D25B3D2CD86E4A8_OFFSET))(a1, a2);
		}
	};
}
