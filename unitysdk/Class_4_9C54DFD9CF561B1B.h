#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_4_9C54DFD9CF561B1B_METHOD_4_3EFF1FD63ABD70FF_OFFSET UNITYSDK_OFFSET(0x1822FE20)
#define CLASS_4_9C54DFD9CF561B1B_METHOD_4_C65FDB2FAF4ABCC7_OFFSET UNITYSDK_OFFSET(0x1822FEF0)
#define CLASS_4_9C54DFD9CF561B1B__CTOR_OFFSET UNITYSDK_OFFSET(0x1822FEA0)

inline static constexpr unsigned int Class_4_9C54DFD9CF561B1B_TypeDefinitionIndex = 23246;

class Class_4_9C54DFD9CF561B1B : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::System::Int32 Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9C54DFD9CF561B1B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_3EFF1FD63ABD70FF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_9C54DFD9CF561B1B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_9C54DFD9CF561B1B*&))((::PBYTE)hIl2Cpp + CLASS_4_9C54DFD9CF561B1B_METHOD_4_3EFF1FD63ABD70FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C65FDB2FAF4ABCC7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_9C54DFD9CF561B1B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_9C54DFD9CF561B1B*))((::PBYTE)hIl2Cpp + CLASS_4_9C54DFD9CF561B1B_METHOD_4_C65FDB2FAF4ABCC7_OFFSET))(a1, a2);
	}
};
