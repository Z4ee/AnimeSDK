#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInsertAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EB1F12BB29E657A4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17A0E690)
#define CLASS_3_EB1F12BB29E657A4__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0E660)

inline static constexpr unsigned int Class_3_EB1F12BB29E657A4_TypeDefinitionIndex = 52199;

class Class_3_EB1F12BB29E657A4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInsertAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInsertAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + CLASS_3_EB1F12BB29E657A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB1F12BB29E657A4_EVALUATE_OFFSET))(this);
	}
};
