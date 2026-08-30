#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBpFeature; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8639F6DA238E009C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA61690)
#define CLASS_3_8639F6DA238E009C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA61660)

inline static constexpr unsigned int Class_3_8639F6DA238E009C_TypeDefinitionIndex = 55559;

class Class_3_8639F6DA238E009C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBpFeature*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBpFeature* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBpFeature*))((::PBYTE)hIl2Cpp + CLASS_3_8639F6DA238E009C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8639F6DA238E009C_ONTASKBEGIN_OFFSET))(this);
	}
};
