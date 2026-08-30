#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchUniqueNameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DDFA1A60612B94D1_5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16E99D30)
#define CLASS_3_DDFA1A60612B94D1_5__CTOR_OFFSET UNITYSDK_OFFSET(0x16E99CE0)

inline static constexpr unsigned int Class_3_DDFA1A60612B94D1_5_TypeDefinitionIndex = 59398;

class Class_3_DDFA1A60612B94D1_5 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchUniqueNameEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchUniqueNameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DDFA1A60612B94D1_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DDFA1A60612B94D1_5_EVALUATE_OFFSET))(this, a1, a2);
	}
};
