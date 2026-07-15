#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPartner; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BB8920BB496210FE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17A02980)
#define CLASS_3_BB8920BB496210FE_METHOD_3_0CF2BA7A7F8B9F9F_OFFSET UNITYSDK_OFFSET(0x17A02BF0)
#define CLASS_3_BB8920BB496210FE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A02930)

inline static constexpr unsigned int Class_3_BB8920BB496210FE_TypeDefinitionIndex = 56596;

class Class_3_BB8920BB496210FE : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchPartner*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchPartner* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + CLASS_3_BB8920BB496210FE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BB8920BB496210FE_EVALUATE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0CF2BA7A7F8B9F9F(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_BB8920BB496210FE_METHOD_3_0CF2BA7A7F8B9F9F_OFFSET))(this, a1, a2);
	}
};
