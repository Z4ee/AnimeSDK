#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
namespace RPG::GameCore { class ChimeraDuelAreSelectionsEqualPredicate; }
namespace RPG::GameCore { class ChimeraDuelAttributeComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelValueComparePredicate; }

#define CLASS_1_8B75D4724D02BBEC_METHOD_1_13778AF85B562317_OFFSET UNITYSDK_OFFSET(0x8CEC9A0)
#define CLASS_1_8B75D4724D02BBEC_METHOD_1_A687D1C23AE14CC9_OFFSET UNITYSDK_OFFSET(0x8CECC50)
#define CLASS_1_8B75D4724D02BBEC_METHOD_1_A7088C98B83C4065_OFFSET UNITYSDK_OFFSET(0x8CECAF0)
#define CLASS_1_8B75D4724D02BBEC_METHOD_1_FB97BE17E229F8D8_OFFSET UNITYSDK_OFFSET(0x8CED190)
#define CLASS_1_8B75D4724D02BBEC__CTOR_OFFSET UNITYSDK_OFFSET(0x8CEC990)

inline static constexpr unsigned int Class_1_8B75D4724D02BBEC_TypeDefinitionIndex = 63116;

class Class_1_8B75D4724D02BBEC : public ::System::Object
{
public:
	::Class_1_C4FD36003027AC99* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_C4FD36003027AC99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_8B75D4724D02BBEC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_13778AF85B562317(::RPG::GameCore::ChimeraDuelPredicateBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelPredicateBase*))((::PBYTE)hIl2Cpp + CLASS_1_8B75D4724D02BBEC_METHOD_1_13778AF85B562317_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A7088C98B83C4065(::RPG::GameCore::ChimeraDuelValueComparePredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelValueComparePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_8B75D4724D02BBEC_METHOD_1_A7088C98B83C4065_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A687D1C23AE14CC9(::RPG::GameCore::ChimeraDuelAttributeComparePredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_8B75D4724D02BBEC_METHOD_1_A687D1C23AE14CC9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FB97BE17E229F8D8(::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate*))((::PBYTE)hIl2Cpp + CLASS_1_8B75D4724D02BBEC_METHOD_1_FB97BE17E229F8D8_OFFSET))(this, a1);
	}
};
