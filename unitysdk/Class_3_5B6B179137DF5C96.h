#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareLineupAvatarHpRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5B6B179137DF5C96_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A4B6E0)
#define CLASS_3_5B6B179137DF5C96__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4B6B0)

inline static constexpr unsigned int Class_3_5B6B179137DF5C96_TypeDefinitionIndex = 49715;

class Class_3_5B6B179137DF5C96 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareLineupAvatarHpRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + CLASS_3_5B6B179137DF5C96__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B6B179137DF5C96_EVALUATE_OFFSET))(this);
	}
};
