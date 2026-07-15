#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_METHOD_3_6B3DA8DB782A49F6_OFFSET UNITYSDK_OFFSET(0x1BB28820)
#define RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_METHOD_3_90057D349D35BFE1_OFFSET UNITYSDK_OFFSET(0x1BB287E0)
#define RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB28810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DronesSwitchDynamicCollider_TypeDefinitionIndex = 19590;

	class DronesSwitchDynamicCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* UniqueKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90057D349D35BFE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DronesSwitchDynamicCollider*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DronesSwitchDynamicCollider*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_METHOD_3_90057D349D35BFE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B3DA8DB782A49F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DronesSwitchDynamicCollider* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DronesSwitchDynamicCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRONESSWITCHDYNAMICCOLLIDER_METHOD_3_6B3DA8DB782A49F6_OFFSET))(a1, a2);
		}
	};
}
