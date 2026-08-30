#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByMuseumProjectorThemeNum; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B37FB29D50E874D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15814150)
#define CLASS_3_6B37FB29D50E874D__CTOR_OFFSET UNITYSDK_OFFSET(0x15814120)

inline static constexpr unsigned int Class_3_6B37FB29D50E874D_TypeDefinitionIndex = 53411;

class Class_3_6B37FB29D50E874D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByMuseumProjectorThemeNum*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByMuseumProjectorThemeNum* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByMuseumProjectorThemeNum*))((::PBYTE)hIl2Cpp + CLASS_3_6B37FB29D50E874D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B37FB29D50E874D_EVALUATE_OFFSET))(this);
	}
};
