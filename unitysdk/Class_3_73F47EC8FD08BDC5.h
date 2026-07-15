#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByDieAnimFinished; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_73F47EC8FD08BDC5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x176EEC70)
#define CLASS_3_73F47EC8FD08BDC5__CTOR_OFFSET UNITYSDK_OFFSET(0x176EEC40)

inline static constexpr unsigned int Class_3_73F47EC8FD08BDC5_TypeDefinitionIndex = 52413;

class Class_3_73F47EC8FD08BDC5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByDieAnimFinished*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + CLASS_3_73F47EC8FD08BDC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73F47EC8FD08BDC5_EVALUATE_OFFSET))(this);
	}
};
