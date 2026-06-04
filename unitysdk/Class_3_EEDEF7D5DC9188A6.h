#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameFetchProxyByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EEDEF7D5DC9188A6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1380FC80)
#define CLASS_3_EEDEF7D5DC9188A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1380FC10)

inline static constexpr unsigned int Class_3_EEDEF7D5DC9188A6_TypeDefinitionIndex = 55239;

class Class_3_EEDEF7D5DC9188A6 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::LittleGameFetchProxyByID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::LittleGameFetchProxyByID* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + CLASS_3_EEDEF7D5DC9188A6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_EEDEF7D5DC9188A6_EVALUATE_OFFSET))(this, a1, a2);
	}
};
