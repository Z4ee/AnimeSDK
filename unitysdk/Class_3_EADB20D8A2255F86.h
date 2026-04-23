#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetCompute; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EADB20D8A2255F86_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF2DBB00)
#define CLASS_3_EADB20D8A2255F86__CTOR_OFFSET UNITYSDK_OFFSET(0xF2DBA50)

inline static constexpr unsigned int Class_3_EADB20D8A2255F86_TypeDefinitionIndex = 54601;

class Class_3_EADB20D8A2255F86 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetCompute*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* Field_3_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TargetCompute* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + CLASS_3_EADB20D8A2255F86__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_EADB20D8A2255F86_EVALUATE_OFFSET))(this, a1, a2);
	}
};
