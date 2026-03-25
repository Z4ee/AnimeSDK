#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropPredicateWithEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DCB8A7F2525CCC18_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA735C0)
#define CLASS_3_DCB8A7F2525CCC18__CTOR_OFFSET UNITYSDK_OFFSET(0xEA73590)

inline static constexpr unsigned int Class_3_DCB8A7F2525CCC18_TypeDefinitionIndex = 43046;

class Class_3_DCB8A7F2525CCC18 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropPredicateWithEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPredicateWithEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPredicateWithEntity*))((::PBYTE)hIl2Cpp + CLASS_3_DCB8A7F2525CCC18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB8A7F2525CCC18_ONTASKBEGIN_OFFSET))(this);
	}
};
