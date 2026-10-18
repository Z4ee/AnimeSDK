#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionPredicateType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_56893336DC39ED96_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1C53FE80)
#define CLASS_1_56893336DC39ED96_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C53FE70)
#define CLASS_1_56893336DC39ED96_METHOD_1_513F60E1612756A9_OFFSET UNITYSDK_OFFSET(0x1C53FEA0)
#define CLASS_1_56893336DC39ED96__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53FE90)

inline static constexpr unsigned int Class_1_56893336DC39ED96_TypeDefinitionIndex = 41823;

class Class_1_56893336DC39ED96 : public ::System::Object
{
public:
	::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType _Type_k__BackingField; // 0x10
	::System::Int32 _Target_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_56893336DC39ED96__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType get_Type()
	{
		return ((::RPG::Client::MechCraft::MechCraftConstraintConditionPredicateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56893336DC39ED96_GET_TYPE_OFFSET))(this);
	}

	::System::Int32 get_Target()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56893336DC39ED96_GET_TARGET_OFFSET))(this);
	}

	::System::Boolean Method_1_513F60E1612756A9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_56893336DC39ED96_METHOD_1_513F60E1612756A9_OFFSET))(this, a1);
	}
};
