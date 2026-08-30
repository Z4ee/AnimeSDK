#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelEntityHasAnyEquipmentsPredicate; }
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueComparePredicate; }

#define CLASS_1_F674BED7E3197D11_METHOD_1_2BF2BA1841AE9133_OFFSET UNITYSDK_OFFSET(0x198A8E50)
#define CLASS_1_F674BED7E3197D11_METHOD_1_A43AA4A2E8A3109A_OFFSET UNITYSDK_OFFSET(0x198A8B60)
#define CLASS_1_F674BED7E3197D11_METHOD_1_C5F1D9110CA3506C_OFFSET UNITYSDK_OFFSET(0x198A8CE0)
#define CLASS_1_F674BED7E3197D11_METHOD_1_EB9A92BF7758D54D_OFFSET UNITYSDK_OFFSET(0x198A8F30)
#define CLASS_1_F674BED7E3197D11__CTOR_OFFSET UNITYSDK_OFFSET(0x198A8B50)

inline static constexpr unsigned int Class_1_F674BED7E3197D11_TypeDefinitionIndex = 77101;

class Class_1_F674BED7E3197D11 : public ::System::Object
{
public:
	::Class_1_A92BC063ED2379EB* BJGGFKFAJMA; // 0x10

	::System::Void _ctor(::Class_1_A92BC063ED2379EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A43AA4A2E8A3109A(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11_METHOD_1_A43AA4A2E8A3109A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C5F1D9110CA3506C(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelEntityValueComparePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11_METHOD_1_C5F1D9110CA3506C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2BF2BA1841AE9133(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelEntityAttributeComparePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11_METHOD_1_2BF2BA1841AE9133_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EB9A92BF7758D54D(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*))((::PBYTE)hIl2Cpp + CLASS_1_F674BED7E3197D11_METHOD_1_EB9A92BF7758D54D_OFFSET))(this, a1, a2);
	}
};
