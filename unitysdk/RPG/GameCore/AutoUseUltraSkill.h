#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_AUTOUSEULTRASKILL_METHOD_3_9BE50230E4633A03_OFFSET UNITYSDK_OFFSET(0x186B6510)
#define RPG_GAMECORE_AUTOUSEULTRASKILL_METHOD_3_D986FA203FC88B32_OFFSET UNITYSDK_OFFSET(0x186B65A0)
#define RPG_GAMECORE_AUTOUSEULTRASKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x186B6570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoUseUltraSkill_TypeDefinitionIndex = 22439;

	class AutoUseUltraSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean WaitCutinFinished; // 0x20
		::System::Boolean Enable; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9BE50230E4633A03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AutoUseUltraSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AutoUseUltraSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL_METHOD_3_9BE50230E4633A03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D986FA203FC88B32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AutoUseUltraSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AutoUseUltraSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOUSEULTRASKILL_METHOD_3_D986FA203FC88B32_OFFSET))(a1, a2);
		}
	};
}
