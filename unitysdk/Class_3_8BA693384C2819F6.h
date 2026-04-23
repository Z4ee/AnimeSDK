#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_8BA693384C2819F6_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1844C810)
#define CLASS_3_8BA693384C2819F6_METHOD_3_CB48187DF507D1FE_OFFSET UNITYSDK_OFFSET(0x1844C8B0)
#define CLASS_3_8BA693384C2819F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1844C870)

inline static constexpr unsigned int Class_3_8BA693384C2819F6_TypeDefinitionIndex = 23192;

class Class_3_8BA693384C2819F6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* Field_3_3; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x28
	::RPG::GameCore::EnumStatusType Field_3_2; // 0x30
	::System::Boolean Field_3_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BA693384C2819F6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8BA693384C2819F6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8BA693384C2819F6*&))((::PBYTE)hIl2Cpp + CLASS_3_8BA693384C2819F6_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CB48187DF507D1FE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8BA693384C2819F6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8BA693384C2819F6*))((::PBYTE)hIl2Cpp + CLASS_3_8BA693384C2819F6_METHOD_3_CB48187DF507D1FE_OFFSET))(a1, a2);
	}
};
