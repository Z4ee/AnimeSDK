#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelEntityHasAnyEquipmentsPredicate; }
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueComparePredicate; }

#define CLASS_1_F674BED7E3197D11_METHOD_1_2BF2BA1841AE9133_OFFSET UNITYSDK_OFFSET(0xA061810)
#define CLASS_1_F674BED7E3197D11_METHOD_1_C5F1D9110CA3506C_OFFSET UNITYSDK_OFFSET(0xA0616A0)
#define CLASS_1_F674BED7E3197D11_METHOD_1_C7C7DDF703E9DF31_OFFSET UNITYSDK_OFFSET(0xA061530)
#define CLASS_1_F674BED7E3197D11_METHOD_1_EB9A92BF7758D54D_OFFSET UNITYSDK_OFFSET(0xA0618F0)
#define CLASS_1_F674BED7E3197D11__CTOR_OFFSET UNITYSDK_OFFSET(0xA061520)

inline static constexpr unsigned int Class_1_F674BED7E3197D11_TypeDefinitionIndex = 71154;

class Class_1_F674BED7E3197D11 : public ::System::Object
{
public:
	::Class_1_C4FD36003027AC99* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_C4FD36003027AC99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C7C7DDF703E9DF31(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11_METHOD_1_C7C7DDF703E9DF31_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C5F1D9110CA3506C(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11_METHOD_1_C5F1D9110CA3506C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2BF2BA1841AE9133(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11_METHOD_1_2BF2BA1841AE9133_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EB9A92BF7758D54D(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11_METHOD_1_EB9A92BF7758D54D_OFFSET))(this, a1, a2);
	}
};
