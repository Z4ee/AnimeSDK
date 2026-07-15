#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_1F0CF91729286987_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x103CB0B0)
#define CLASS_3_1F0CF91729286987_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x103CB1B0)
#define CLASS_3_1F0CF91729286987__CTOR_OFFSET UNITYSDK_OFFSET(0x103CB140)

inline static constexpr unsigned int Class_3_1F0CF91729286987_TypeDefinitionIndex = 23339;

class Class_3_1F0CF91729286987 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::PredicateConfig* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::System::String* Field_3_4; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_6; // 0x48
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* Field_3_7; // 0x50
	::RPG::GameCore::EnumStatusTypeMask Field_3_8; // 0x58
	::System::Boolean Field_3_9; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F0CF91729286987__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1F0CF91729286987*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1F0CF91729286987*&))((::PBYTE)hIl2Cpp + CLASS_3_1F0CF91729286987_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1F0CF91729286987* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1F0CF91729286987*))((::PBYTE)hIl2Cpp + CLASS_3_1F0CF91729286987_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};
