#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperationImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByValueEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_933664B5085F0C6F_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA435150)
#define CLASS_2_933664B5085F0C6F__CTOR_OFFSET UNITYSDK_OFFSET(0xA435130)

inline static constexpr unsigned int Class_2_933664B5085F0C6F_TypeDefinitionIndex = 55289;

class Class_2_933664B5085F0C6F : public ::RPG::GameCore::TargetSeqOperationImpl_1<::RPG::GameCore::TargetSortByValueEvaluator*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetSortByValueEvaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByValueEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_933664B5085F0C6F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_933664B5085F0C6F_TRANSFORM_OFFSET))(this, a1, a2);
	}
};
