#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAnchorAngleDiffWithMainCameraOverThan; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D94F21DF8F735D9B_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAD1F1C0)
#define CLASS_3_D94F21DF8F735D9B__CTOR_OFFSET UNITYSDK_OFFSET(0xAD1F190)

inline static constexpr unsigned int Class_3_D94F21DF8F735D9B_TypeDefinitionIndex = 54161;

class Class_3_D94F21DF8F735D9B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + CLASS_3_D94F21DF8F735D9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D94F21DF8F735D9B_EVALUATE_OFFSET))(this);
	}
};
