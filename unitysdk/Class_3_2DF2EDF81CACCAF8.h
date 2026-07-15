#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsUIPageOpen; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2DF2EDF81CACCAF8_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBFB3DC0)
#define CLASS_3_2DF2EDF81CACCAF8__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB3D90)

inline static constexpr unsigned int Class_3_2DF2EDF81CACCAF8_TypeDefinitionIndex = 50213;

class Class_3_2DF2EDF81CACCAF8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsUIPageOpen*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + CLASS_3_2DF2EDF81CACCAF8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DF2EDF81CACCAF8_EVALUATE_OFFSET))(this);
	}
};
