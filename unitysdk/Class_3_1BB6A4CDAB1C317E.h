#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1BB6A4CDAB1C317E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x144AF110)
#define CLASS_3_1BB6A4CDAB1C317E__CTOR_OFFSET UNITYSDK_OFFSET(0x144AF0C0)

inline static constexpr unsigned int Class_3_1BB6A4CDAB1C317E_TypeDefinitionIndex = 55333;

class Class_3_1BB6A4CDAB1C317E : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchCaster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchCaster* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCaster*))((::PBYTE)hIl2Cpp + CLASS_3_1BB6A4CDAB1C317E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_1BB6A4CDAB1C317E_EVALUATE_OFFSET))(this, a1, a2);
	}
};
