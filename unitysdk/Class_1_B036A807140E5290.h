#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionStatType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_107;
class Class_0_16E4307DCC419505_163;
class Class_1_7B5BC5F7531D3B01;
class Class_1_E3044AFF91E5082A;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_B036A807140E5290_METHOD_1_67BEF74D4CE686AF_OFFSET UNITYSDK_OFFSET(0x1C534FE0)
#define CLASS_1_B036A807140E5290_METHOD_1_B5C13591E4AF3F24_OFFSET UNITYSDK_OFFSET(0x1C517280)
#define CLASS_1_B036A807140E5290_METHOD_1_B6D56F45C588B7A6_OFFSET UNITYSDK_OFFSET(0x1C535440)
#define CLASS_1_B036A807140E5290_METHOD_1_EB91131C0610833D_OFFSET UNITYSDK_OFFSET(0x1C5349C0)
#define CLASS_1_B036A807140E5290__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5356E0)

inline static constexpr unsigned int Class_1_B036A807140E5290_TypeDefinitionIndex = 41835;

class Class_1_B036A807140E5290 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B036A807140E5290__CTOR_OFFSET))(this);
	}

	::Class_1_7B5BC5F7531D3B01* Method_1_B5C13591E4AF3F24(::Class_0_16E4307DCC419505_107* a1, ::Class_0_16E4307DCC419505_163* a2)
	{
		return ((::Class_1_7B5BC5F7531D3B01*(*)(::PVOID, ::Class_0_16E4307DCC419505_107*, ::Class_0_16E4307DCC419505_163*))((::PBYTE)hIl2Cpp + CLASS_1_B036A807140E5290_METHOD_1_B5C13591E4AF3F24_OFFSET))(this, a1, a2);
	}

	::Class_1_E3044AFF91E5082A* Method_1_EB91131C0610833D(::RPG::Client::MechCraft::MechCraftConstraintConditionStatType a1, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a3)
	{
		return ((::Class_1_E3044AFF91E5082A*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionStatType, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B036A807140E5290_METHOD_1_EB91131C0610833D_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_E3044AFF91E5082A* Method_1_67BEF74D4CE686AF(::RPG::Client::MechCraft::MechCraftConstraintConditionStatType a1, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a3, ::Class_0_16E4307DCC419505_163* a4)
	{
		return ((::Class_1_E3044AFF91E5082A*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionStatType, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::Class_0_16E4307DCC419505_163*))((::PBYTE)hIl2Cpp + CLASS_1_B036A807140E5290_METHOD_1_67BEF74D4CE686AF_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_E3044AFF91E5082A* Method_1_B6D56F45C588B7A6(::RPG::Client::MechCraft::MechCraftConstraintConditionStatType a1, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a3)
	{
		return ((::Class_1_E3044AFF91E5082A*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionStatType, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B036A807140E5290_METHOD_1_B6D56F45C588B7A6_OFFSET))(this, a1, a2, a3);
	}
};
