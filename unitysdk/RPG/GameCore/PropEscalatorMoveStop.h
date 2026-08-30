#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPESCALATORMOVESTOP_METHOD_3_23C1BDE8343B18F1_OFFSET UNITYSDK_OFFSET(0x1D3654F0)
#define RPG_GAMECORE_PROPESCALATORMOVESTOP_METHOD_3_9ACE875DD87BDE18_OFFSET UNITYSDK_OFFSET(0x1D365590)
#define RPG_GAMECORE_PROPESCALATORMOVESTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D365550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEscalatorMoveStop_TypeDefinitionIndex = 20780;

	class PropEscalatorMoveStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23C1BDE8343B18F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorMoveStop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorMoveStop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP_METHOD_3_23C1BDE8343B18F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9ACE875DD87BDE18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropEscalatorMoveStop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropEscalatorMoveStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPESCALATORMOVESTOP_METHOD_3_9ACE875DD87BDE18_OFFSET))(a1, a2);
		}
	};
}
