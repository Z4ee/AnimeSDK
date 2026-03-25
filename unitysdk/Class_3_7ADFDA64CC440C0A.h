#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_Chess_ByCanMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7ADFDA64CC440C0A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8B629A0)
#define CLASS_3_7ADFDA64CC440C0A__CTOR_OFFSET UNITYSDK_OFFSET(0x8B62970)

inline static constexpr unsigned int Class_3_7ADFDA64CC440C0A_TypeDefinitionIndex = 45174;

class Class_3_7ADFDA64CC440C0A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_Chess_ByCanMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Chess_ByCanMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Chess_ByCanMove*))((::PBYTE)hIl2Cpp + CLASS_3_7ADFDA64CC440C0A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7ADFDA64CC440C0A_EVALUATE_OFFSET))(this);
	}
};
