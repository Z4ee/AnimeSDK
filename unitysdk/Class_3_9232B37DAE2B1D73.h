#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DecoupleParentTransform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9232B37DAE2B1D73_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC147450)
#define CLASS_3_9232B37DAE2B1D73__CTOR_OFFSET UNITYSDK_OFFSET(0xC147420)

inline static constexpr unsigned int Class_3_9232B37DAE2B1D73_TypeDefinitionIndex = 55201;

class Class_3_9232B37DAE2B1D73 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DecoupleParentTransform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DecoupleParentTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DecoupleParentTransform*))((::PBYTE)hIl2Cpp + CLASS_3_9232B37DAE2B1D73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9232B37DAE2B1D73_ONTASKBEGIN_OFFSET))(this);
	}
};
