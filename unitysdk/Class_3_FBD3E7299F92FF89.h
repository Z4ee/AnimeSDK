#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvNpcEx; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_FBD3E7299F92FF89_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1896FE00)
#define CLASS_3_FBD3E7299F92FF89__CTOR_OFFSET UNITYSDK_OFFSET(0x1896FDB0)

inline static constexpr unsigned int Class_3_FBD3E7299F92FF89_TypeDefinitionIndex = 59236;

class Class_3_FBD3E7299F92FF89 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvNpcEx*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvNpcEx* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvNpcEx*))((::PBYTE)hIl2Cpp + CLASS_3_FBD3E7299F92FF89__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_FBD3E7299F92FF89_EVALUATE_OFFSET))(this, a1, a2);
	}
};
