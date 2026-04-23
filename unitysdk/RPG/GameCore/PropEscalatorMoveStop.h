#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPESCALATORMOVESTOP_METHOD_3_0B5950FDA3194282_OFFSET UNITYSDK_OFFSET(0x18C6AD60)
#define RPG_GAMECORE_PROPESCALATORMOVESTOP_METHOD_3_9ACE875DD87BDE18_OFFSET UNITYSDK_OFFSET(0x18C6AE30)
#define RPG_GAMECORE_PROPESCALATORMOVESTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6ADE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEscalatorMoveStop_TypeDefinitionIndex = 20004;

	class PropEscalatorMoveStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B5950FDA3194282(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorMoveStop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorMoveStop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP_METHOD_3_0B5950FDA3194282_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9ACE875DD87BDE18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorMoveStop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorMoveStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP_METHOD_3_9ACE875DD87BDE18_OFFSET))(a1, a2);
		}
	};
}
