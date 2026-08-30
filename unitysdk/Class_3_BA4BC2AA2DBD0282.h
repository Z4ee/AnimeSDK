#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAimAtTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BA4BC2AA2DBD0282_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19965680)
#define CLASS_3_BA4BC2AA2DBD0282__CTOR_OFFSET UNITYSDK_OFFSET(0x19965630)

inline static constexpr unsigned int Class_3_BA4BC2AA2DBD0282_TypeDefinitionIndex = 59304;

class Class_3_BA4BC2AA2DBD0282 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAimAtTargetList*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAimAtTargetList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + CLASS_3_BA4BC2AA2DBD0282__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BA4BC2AA2DBD0282_EVALUATE_OFFSET))(this, a1, a2);
	}
};
