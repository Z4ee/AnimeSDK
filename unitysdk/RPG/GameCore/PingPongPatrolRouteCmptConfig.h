#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongGridIndex; }

#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_METHOD_3_83FF8B7B4E34B4EE_OFFSET UNITYSDK_OFFSET(0x19A0F1D0)
#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_METHOD_3_F3DBA84D8765A384_OFFSET UNITYSDK_OFFSET(0x19A0F260)
#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0F240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongPatrolRouteCmptConfig_TypeDefinitionIndex = 18009;

	class PingPongPatrolRouteCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongGridIndex*>* PatrolPointList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83FF8B7B4E34B4EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongPatrolRouteCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongPatrolRouteCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_METHOD_3_83FF8B7B4E34B4EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3DBA84D8765A384(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongPatrolRouteCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongPatrolRouteCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_METHOD_3_F3DBA84D8765A384_OFFSET))(a1, a2);
		}
	};
}
