#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_METHOD_3_122924EFC68F72C1_OFFSET UNITYSDK_OFFSET(0x1D2AE0B0)
#define RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_METHOD_3_F839DFA5761249D4_OFFSET UNITYSDK_OFFSET(0x1D2AE0F0)
#define RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AE0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAddModifierBindValue_TypeDefinitionIndex = 23434;

	class ModifyAddModifierBindValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueKey; // 0x18
		::RPG::GameCore::DynamicString* TargetModifierName; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* TargetBehaviorFlagList; // 0x28
		::System::Boolean IsRevert; // 0x30
		::RPG::GameCore::DynamicFloat* ChanceRatio; // 0x38
		::RPG::GameCore::DynamicFloat* ChanceDelta; // 0x40
		::RPG::GameCore::DynamicFloat* LifeTimeRatio; // 0x48
		::RPG::GameCore::DynamicFloat* LifeTimeDelta; // 0x50
		::RPG::GameCore::DynamicFloat* MaxLayerRatio; // 0x58
		::RPG::GameCore::DynamicFloat* MaxLayerDelta; // 0x60
		::RPG::GameCore::DynamicFloat* LayerAddWhenStackRatio; // 0x68
		::RPG::GameCore::DynamicFloat* LayerAddWhenStackDelta; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_122924EFC68F72C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAddModifierBindValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAddModifierBindValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_METHOD_3_122924EFC68F72C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F839DFA5761249D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAddModifierBindValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAddModifierBindValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADDMODIFIERBINDVALUE_METHOD_3_F839DFA5761249D4_OFFSET))(a1, a2);
		}
	};
}
