#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_1C6D038ACA57B217;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByGridFightRoleTotalDamage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5C0BC4DD2B8754F8_COMPARE_OFFSET UNITYSDK_OFFSET(0x18547CD0)
#define CLASS_2_5C0BC4DD2B8754F8_METHOD_2_3EAA64E506F9F311_OFFSET UNITYSDK_OFFSET(0x18547BD0)
#define CLASS_2_5C0BC4DD2B8754F8_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18547910)
#define CLASS_2_5C0BC4DD2B8754F8__CTOR_OFFSET UNITYSDK_OFFSET(0x185478F0)

inline static constexpr unsigned int Class_2_5C0BC4DD2B8754F8_TypeDefinitionIndex = 59324;

class Class_2_5C0BC4DD2B8754F8 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1C6D038ACA57B217*>* JNJPCGJJGGD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + CLASS_2_5C0BC4DD2B8754F8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_5C0BC4DD2B8754F8_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3EAA64E506F9F311(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_5C0BC4DD2B8754F8_METHOD_2_3EAA64E506F9F311_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5C0BC4DD2B8754F8_COMPARE_OFFSET))(this, a1, a2);
	}
};
