#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_5FAB3772DB403941_OFFSET UNITYSDK_OFFSET(0x190EF4F0)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_747086FD16A110BE_OFFSET UNITYSDK_OFFSET(0x190EF590)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x190EF550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtModifierProperty_TypeDefinitionIndex = 23282;

	class VE_RtModifierProperty : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ModifierName; // 0x28
		::RPG::GameCore::NumOperationType OperationType; // 0x30
		::RPG::GameCore::RtModifierPropertyType Property; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FAB3772DB403941(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtModifierProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtModifierProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_5FAB3772DB403941_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_747086FD16A110BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtModifierProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtModifierProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_747086FD16A110BE_OFFSET))(a1, a2);
		}
	};
}
