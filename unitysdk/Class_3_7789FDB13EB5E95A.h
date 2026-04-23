#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ST_Parkour_ByCompareLapCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7789FDB13EB5E95A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x92850C0)
#define CLASS_3_7789FDB13EB5E95A__CTOR_OFFSET UNITYSDK_OFFSET(0x9285090)

inline static constexpr unsigned int Class_3_7789FDB13EB5E95A_TypeDefinitionIndex = 48127;

class Class_3_7789FDB13EB5E95A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ST_Parkour_ByCompareLapCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + CLASS_3_7789FDB13EB5E95A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7789FDB13EB5E95A_EVALUATE_OFFSET))(this);
	}
};
