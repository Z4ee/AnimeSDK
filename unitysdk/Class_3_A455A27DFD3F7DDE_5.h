#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAvatarAssistant; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A455A27DFD3F7DDE_5_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBD4610)
#define CLASS_3_A455A27DFD3F7DDE_5__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD45C0)

inline static constexpr unsigned int Class_3_A455A27DFD3F7DDE_5_TypeDefinitionIndex = 59294;

class Class_3_A455A27DFD3F7DDE_5 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAvatarAssistant*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAvatarAssistant* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_A455A27DFD3F7DDE_5_EVALUATE_OFFSET))(this, a1, a2);
	}
};
