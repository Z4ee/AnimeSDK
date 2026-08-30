#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_METHOD_3_4318610568E94BBA_OFFSET UNITYSDK_OFFSET(0x1DBA1560)
#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_METHOD_3_67ADC89AF98B2AA1_OFFSET UNITYSDK_OFFSET(0x1DBA15A0)
#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBA1590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RevertActionEntityToObserveState_TypeDefinitionIndex = 23188;

	class RevertActionEntityToObserveState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4318610568E94BBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RevertActionEntityToObserveState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RevertActionEntityToObserveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_METHOD_3_4318610568E94BBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67ADC89AF98B2AA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RevertActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RevertActionEntityToObserveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_METHOD_3_67ADC89AF98B2AA1_OFFSET))(a1, a2);
		}
	};
}
