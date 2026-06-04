#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAvatarByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_01B19879061F50EE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x139DCF00)
#define CLASS_3_01B19879061F50EE__CTOR_OFFSET UNITYSDK_OFFSET(0x139DCE90)

inline static constexpr unsigned int Class_3_01B19879061F50EE_TypeDefinitionIndex = 55362;

class Class_3_01B19879061F50EE : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAvatarByID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAvatarByID* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + CLASS_3_01B19879061F50EE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_01B19879061F50EE_EVALUATE_OFFSET))(this, a1, a2);
	}
};
