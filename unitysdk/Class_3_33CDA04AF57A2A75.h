#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetImmediateAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_33CDA04AF57A2A75_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4764F0)
#define CLASS_3_33CDA04AF57A2A75__CTOR_OFFSET UNITYSDK_OFFSET(0xE4764C0)

inline static constexpr unsigned int Class_3_33CDA04AF57A2A75_TypeDefinitionIndex = 44463;

class Class_3_33CDA04AF57A2A75 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetImmediateAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetImmediateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetImmediateAction*))((::PBYTE)hIl2Cpp + CLASS_3_33CDA04AF57A2A75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33CDA04AF57A2A75_ONTASKBEGIN_OFFSET))(this);
	}
};
