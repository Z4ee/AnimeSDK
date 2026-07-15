#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PingPongGridIndex; }

#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_METHOD_3_241FCB66C28148F4_OFFSET UNITYSDK_OFFSET(0x1B4C9380)
#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_METHOD_3_F3DBA84D8765A384_OFFSET UNITYSDK_OFFSET(0x1B4C93E0)
#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C93D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongPatrolRouteCmptConfig_TypeDefinitionIndex = 18193;

	class PingPongPatrolRouteCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongGridIndex*>* PatrolPointList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_241FCB66C28148F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongPatrolRouteCmptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongPatrolRouteCmptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_METHOD_3_241FCB66C28148F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3DBA84D8765A384(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongPatrolRouteCmptConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongPatrolRouteCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_METHOD_3_F3DBA84D8765A384_OFFSET))(a1, a2);
		}
	};
}
