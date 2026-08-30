#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

class Class_1_5469D397DAE62876;
class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetQuery; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B5FC20AD507C2E2A_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC396830)
#define CLASS_3_B5FC20AD507C2E2A_METHOD_3_E724C915A6F0EFAA_OFFSET UNITYSDK_OFFSET(0xC396BE0)
#define CLASS_3_B5FC20AD507C2E2A__CTOR_OFFSET UNITYSDK_OFFSET(0xC3967A0)

inline static constexpr unsigned int Class_3_B5FC20AD507C2E2A_TypeDefinitionIndex = 59404;

class Class_3_B5FC20AD507C2E2A : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetQuery*>
{
public:
	::Class_1_5469D397DAE62876* BAJMOHMGFAL; // 0x18
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* LKJPDFEIIDA; // 0x20
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TargetQuery* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + CLASS_3_B5FC20AD507C2E2A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_B5FC20AD507C2E2A_EVALUATE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_E724C915A6F0EFAA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B5FC20AD507C2E2A_METHOD_3_E724C915A6F0EFAA_OFFSET))(this, a1);
	}
};
