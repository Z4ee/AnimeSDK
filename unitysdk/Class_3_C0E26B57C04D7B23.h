#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCameraAnchorTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C0E26B57C04D7B23_EVALUATE_OFFSET UNITYSDK_OFFSET(0x188E62A0)
#define CLASS_3_C0E26B57C04D7B23__CTOR_OFFSET UNITYSDK_OFFSET(0x188E6250)

inline static constexpr unsigned int Class_3_C0E26B57C04D7B23_TypeDefinitionIndex = 59305;

class Class_3_C0E26B57C04D7B23 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCameraAnchorTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCameraAnchorTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + CLASS_3_C0E26B57C04D7B23__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_C0E26B57C04D7B23_EVALUATE_OFFSET))(this, a1, a2);
	}
};
