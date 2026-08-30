#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class ByCompareMatchThreeV2BirdLocation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E012B11CBA7E34D8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1874F160)
#define CLASS_3_E012B11CBA7E34D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1874F130)

inline static constexpr unsigned int Class_3_E012B11CBA7E34D8_TypeDefinitionIndex = 53288;

class Class_3_E012B11CBA7E34D8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::Client::ByCompareMatchThreeV2BirdLocation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ByCompareMatchThreeV2BirdLocation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ByCompareMatchThreeV2BirdLocation*))((::PBYTE)hIl2Cpp + CLASS_3_E012B11CBA7E34D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E012B11CBA7E34D8_EVALUATE_OFFSET))(this);
	}
};
