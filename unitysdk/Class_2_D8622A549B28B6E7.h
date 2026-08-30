#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByPredicate; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D8622A549B28B6E7_COMPARE_OFFSET UNITYSDK_OFFSET(0xDD79AF0)
#define CLASS_2_D8622A549B28B6E7_METHOD_2_63A75319D8C51064_OFFSET UNITYSDK_OFFSET(0xDD7A110)
#define CLASS_2_D8622A549B28B6E7_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xDD79E50)
#define CLASS_2_D8622A549B28B6E7__CTOR_OFFSET UNITYSDK_OFFSET(0xDD79AD0)

inline static constexpr unsigned int Class_2_D8622A549B28B6E7_TypeDefinitionIndex = 59311;

class Class_2_D8622A549B28B6E7 : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByPredicate*>
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TargetSortByPredicate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByPredicate*))((::PBYTE)hIl2Cpp + CLASS_2_D8622A549B28B6E7__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D8622A549B28B6E7_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_D8622A549B28B6E7_TRANSFORM_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_63A75319D8C51064(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_D8622A549B28B6E7_METHOD_2_63A75319D8C51064_OFFSET))(this, a1);
	}
};
