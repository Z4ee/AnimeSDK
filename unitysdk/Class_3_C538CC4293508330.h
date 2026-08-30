#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLastSearchEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C538CC4293508330_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB999380)
#define CLASS_3_C538CC4293508330__CTOR_OFFSET UNITYSDK_OFFSET(0xB999330)

inline static constexpr unsigned int Class_3_C538CC4293508330_TypeDefinitionIndex = 59244;

class Class_3_C538CC4293508330 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchLastSearchEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchLastSearchEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C538CC4293508330__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_C538CC4293508330_EVALUATE_OFFSET))(this, a1, a2);
	}
};
