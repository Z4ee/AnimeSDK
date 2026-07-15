#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSubMissionState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2AF9F36A392DADA9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x169871B0)
#define CLASS_3_2AF9F36A392DADA9__CTOR_OFFSET UNITYSDK_OFFSET(0x16987180)

inline static constexpr unsigned int Class_3_2AF9F36A392DADA9_TypeDefinitionIndex = 50204;

class Class_3_2AF9F36A392DADA9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSubMissionState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSubMissionState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSubMissionState*))((::PBYTE)hIl2Cpp + CLASS_3_2AF9F36A392DADA9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2AF9F36A392DADA9_EVALUATE_OFFSET))(this);
	}
};
