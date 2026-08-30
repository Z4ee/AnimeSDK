#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPESCALATORMOVESTART_METHOD_3_14635948DA1A68F6_OFFSET UNITYSDK_OFFSET(0x1D178F90)
#define RPG_GAMECORE_PROPESCALATORMOVESTART_METHOD_3_C1F7128735689589_OFFSET UNITYSDK_OFFSET(0x1D178EF0)
#define RPG_GAMECORE_PROPESCALATORMOVESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1D178F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEscalatorMoveStart_TypeDefinitionIndex = 20779;

	class PropEscalatorMoveStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Speed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1F7128735689589(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorMoveStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorMoveStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART_METHOD_3_C1F7128735689589_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_14635948DA1A68F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorMoveStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorMoveStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTART_METHOD_3_14635948DA1A68F6_OFFSET))(a1, a2);
		}
	};
}
