#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_METHOD_3_67ADC89AF98B2AA1_OFFSET UNITYSDK_OFFSET(0x19ADDC70)
#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_METHOD_3_D936C9E6891E0B48_OFFSET UNITYSDK_OFFSET(0x19ADDBF0)
#define RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADDC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RevertActionEntityToObserveState_TypeDefinitionIndex = 22174;

	class RevertActionEntityToObserveState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D936C9E6891E0B48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RevertActionEntityToObserveState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RevertActionEntityToObserveState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_METHOD_3_D936C9E6891E0B48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67ADC89AF98B2AA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RevertActionEntityToObserveState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RevertActionEntityToObserveState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REVERTACTIONENTITYTOOBSERVESTATE_METHOD_3_67ADC89AF98B2AA1_OFFSET))(a1, a2);
		}
	};
}
