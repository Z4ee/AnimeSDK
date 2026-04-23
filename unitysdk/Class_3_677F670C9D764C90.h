#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

class Class_2_24193089A4D2255F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetFetchModifierBindSnapshot; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_677F670C9D764C90_EVALUATE_OFFSET UNITYSDK_OFFSET(0x129C8600)
#define CLASS_3_677F670C9D764C90_METHOD_3_78C8B9ACE5B90E2B_OFFSET UNITYSDK_OFFSET(0x129C89C0)
#define CLASS_3_677F670C9D764C90__CTOR_OFFSET UNITYSDK_OFFSET(0x129C8560)

inline static constexpr unsigned int Class_3_677F670C9D764C90_TypeDefinitionIndex = 49581;

class Class_3_677F670C9D764C90 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::RtTargetFetchModifierBindSnapshot*>
{
public:
	::System::Void _ctor(::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + CLASS_3_677F670C9D764C90__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_677F670C9D764C90_EVALUATE_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_78C8B9ACE5B90E2B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::Class_2_24193089A4D2255F* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_3_677F670C9D764C90_METHOD_3_78C8B9ACE5B90E2B_OFFSET))(a1, a2);
	}
};
