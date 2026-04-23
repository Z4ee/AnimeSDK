#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_D5277F1C84020241_METHOD_4_3EFF1FD63ABD70FF_OFFSET UNITYSDK_OFFSET(0x18BB62B0)
#define CLASS_4_D5277F1C84020241_METHOD_4_C65FDB2FAF4ABCC7_OFFSET UNITYSDK_OFFSET(0x18BB6380)
#define CLASS_4_D5277F1C84020241__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB6330)

inline static constexpr unsigned int Class_4_D5277F1C84020241_TypeDefinitionIndex = 23203;

class Class_4_D5277F1C84020241 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x28
	::RPG::GameCore::DynamicString* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D5277F1C84020241__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_3EFF1FD63ABD70FF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D5277F1C84020241*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D5277F1C84020241*&))((::PBYTE)hIl2Cpp + CLASS_4_D5277F1C84020241_METHOD_4_3EFF1FD63ABD70FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C65FDB2FAF4ABCC7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D5277F1C84020241* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D5277F1C84020241*))((::PBYTE)hIl2Cpp + CLASS_4_D5277F1C84020241_METHOD_4_C65FDB2FAF4ABCC7_OFFSET))(a1, a2);
	}
};
