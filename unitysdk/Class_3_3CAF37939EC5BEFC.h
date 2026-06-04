#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByLocalWin; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3CAF37939EC5BEFC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAFFBE90)
#define CLASS_3_3CAF37939EC5BEFC__CTOR_OFFSET UNITYSDK_OFFSET(0xAFFBE60)

inline static constexpr unsigned int Class_3_3CAF37939EC5BEFC_TypeDefinitionIndex = 51135;

class Class_3_3CAF37939EC5BEFC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByLocalWin*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLocalWin* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + CLASS_3_3CAF37939EC5BEFC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CAF37939EC5BEFC_EVALUATE_OFFSET))(this);
	}
};
