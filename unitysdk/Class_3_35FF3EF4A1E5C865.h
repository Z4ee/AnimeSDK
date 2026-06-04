#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvFakeAvatarPlayerStub; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_35FF3EF4A1E5C865_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB2AC470)
#define CLASS_3_35FF3EF4A1E5C865__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AC400)

inline static constexpr unsigned int Class_3_35FF3EF4A1E5C865_TypeDefinitionIndex = 55221;

class Class_3_35FF3EF4A1E5C865 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + CLASS_3_35FF3EF4A1E5C865__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_35FF3EF4A1E5C865_EVALUATE_OFFSET))(this, a1, a2);
	}
};
