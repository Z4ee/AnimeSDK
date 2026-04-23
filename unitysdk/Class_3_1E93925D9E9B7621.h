#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameFetchProxyByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1E93925D9E9B7621_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12886430)
#define CLASS_3_1E93925D9E9B7621__CTOR_OFFSET UNITYSDK_OFFSET(0x12886390)

inline static constexpr unsigned int Class_3_1E93925D9E9B7621_TypeDefinitionIndex = 54512;

class Class_3_1E93925D9E9B7621 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::LittleGameFetchProxyByID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::LittleGameFetchProxyByID* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + CLASS_3_1E93925D9E9B7621__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_1E93925D9E9B7621_EVALUATE_OFFSET))(this, a1, a2);
	}
};
