#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYACTIONDELAY_METHOD_3_3B2C690A926408E7_OFFSET UNITYSDK_OFFSET(0x17429800)
#define RPG_GAMECORE_MODIFYACTIONDELAY_METHOD_3_BBBEFDE9B734D391_OFFSET UNITYSDK_OFFSET(0x17429780)
#define RPG_GAMECORE_MODIFYACTIONDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x174297D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyActionDelay_TypeDefinitionIndex = 20888;

	class ModifyActionDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AddValue; // 0x20
		::RPG::GameCore::DynamicFloat* AddNormalizedValue; // 0x28
		::System::Boolean InitModify; // 0x30
		::System::Boolean ChangeDelayVersion; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIONDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBBEFDE9B734D391(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyActionDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyActionDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIONDELAY_METHOD_3_BBBEFDE9B734D391_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B2C690A926408E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyActionDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIONDELAY_METHOD_3_3B2C690A926408E7_OFFSET))(a1, a2);
		}
	};
}
