#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvNpcResetEyeTransforms; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D74F29A7D214D74F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D95330)
#define CLASS_3_D74F29A7D214D74F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D95300)

inline static constexpr unsigned int Class_3_D74F29A7D214D74F_TypeDefinitionIndex = 42470;

class Class_3_D74F29A7D214D74F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvNpcResetEyeTransforms*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcResetEyeTransforms* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcResetEyeTransforms*))((::PBYTE)hIl2Cpp + CLASS_3_D74F29A7D214D74F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D74F29A7D214D74F_ONTASKBEGIN_OFFSET))(this);
	}
};
