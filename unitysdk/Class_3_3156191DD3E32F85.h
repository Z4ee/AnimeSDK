#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPamNormalActionSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3156191DD3E32F85_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE3D590)
#define CLASS_3_3156191DD3E32F85__CTOR_OFFSET UNITYSDK_OFFSET(0xBE3D560)

inline static constexpr unsigned int Class_3_3156191DD3E32F85_TypeDefinitionIndex = 53416;

class Class_3_3156191DD3E32F85 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPamNormalActionSwitch*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + CLASS_3_3156191DD3E32F85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3156191DD3E32F85_EVALUATE_OFFSET))(this);
	}
};
