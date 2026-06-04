#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCameraAimTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DCAED60E60010D85_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAD65270)
#define CLASS_3_DCAED60E60010D85_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAD65220)

inline static constexpr unsigned int Class_3_DCAED60E60010D85_2_TypeDefinitionIndex = 55285;

class Class_3_DCAED60E60010D85_2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCameraAimTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCameraAimTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + CLASS_3_DCAED60E60010D85_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DCAED60E60010D85_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};
