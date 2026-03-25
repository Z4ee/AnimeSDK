#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchUniqueNameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F757809A9F6BA2D1_8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x99DCFD0)
#define CLASS_3_F757809A9F6BA2D1_8__CTOR_OFFSET UNITYSDK_OFFSET(0x99DCF50)

inline static constexpr unsigned int Class_3_F757809A9F6BA2D1_8_TypeDefinitionIndex = 47909;

class Class_3_F757809A9F6BA2D1_8 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchUniqueNameEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchUniqueNameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_F757809A9F6BA2D1_8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_F757809A9F6BA2D1_8_EVALUATE_OFFSET))(this, a1, a2);
	}
};
