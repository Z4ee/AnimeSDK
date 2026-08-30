#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAnchor; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9A1C530267618D8C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11EEBF00)
#define CLASS_3_9A1C530267618D8C__CTOR_OFFSET UNITYSDK_OFFSET(0x11EEBEB0)

inline static constexpr unsigned int Class_3_9A1C530267618D8C_TypeDefinitionIndex = 59240;

class Class_3_9A1C530267618D8C : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAnchor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAnchor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + CLASS_3_9A1C530267618D8C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_9A1C530267618D8C_EVALUATE_OFFSET))(this, a1, a2);
	}
};
