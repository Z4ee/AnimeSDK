#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvLocalPlayer; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6D0980391D2140BA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1003DC20)
#define CLASS_3_6D0980391D2140BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1003DBA0)

inline static constexpr unsigned int Class_3_6D0980391D2140BA_TypeDefinitionIndex = 54484;

class Class_3_6D0980391D2140BA : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvLocalPlayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvLocalPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_6D0980391D2140BA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_6D0980391D2140BA_EVALUATE_OFFSET))(this, a1, a2);
	}
};
