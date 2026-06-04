#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPESCALATORMOVESTART_METHOD_3_14635948DA1A68F6_OFFSET UNITYSDK_OFFSET(0x19A8CAD0)
#define RPG_GAMECORE_PROPESCALATORMOVESTART_METHOD_3_A55A6723DE75D292_OFFSET UNITYSDK_OFFSET(0x19A8CA00)
#define RPG_GAMECORE_PROPESCALATORMOVESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8CA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEscalatorMoveStart_TypeDefinitionIndex = 19865;

	class PropEscalatorMoveStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Speed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A55A6723DE75D292(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorMoveStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorMoveStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART_METHOD_3_A55A6723DE75D292_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14635948DA1A68F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorMoveStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorMoveStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART_METHOD_3_14635948DA1A68F6_OFFSET))(a1, a2);
		}
	};
}
