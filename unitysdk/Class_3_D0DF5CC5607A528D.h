#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D0DF5CC5607A528D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A3FEF0)
#define CLASS_3_D0DF5CC5607A528D__CTOR_OFFSET UNITYSDK_OFFSET(0x13A3FEA0)

inline static constexpr unsigned int Class_3_D0DF5CC5607A528D_TypeDefinitionIndex = 56494;

class Class_3_D0DF5CC5607A528D : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchFateRinCardCaster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchFateRinCardCaster* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFateRinCardCaster*))((::PBYTE)hIl2Cpp + CLASS_3_D0DF5CC5607A528D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_D0DF5CC5607A528D_EVALUATE_OFFSET))(this, a1, a2);
	}
};
