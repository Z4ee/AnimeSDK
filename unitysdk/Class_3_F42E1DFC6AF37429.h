#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPlayerRemoveAttachment; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F42E1DFC6AF37429_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8C04F10)
#define CLASS_3_F42E1DFC6AF37429__CTOR_OFFSET UNITYSDK_OFFSET(0x8C04EE0)

inline static constexpr unsigned int Class_3_F42E1DFC6AF37429_TypeDefinitionIndex = 42486;

class Class_3_F42E1DFC6AF37429 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPlayerRemoveAttachment*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerRemoveAttachment* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerRemoveAttachment*))((::PBYTE)hIl2Cpp + CLASS_3_F42E1DFC6AF37429__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F42E1DFC6AF37429_ONTASKBEGIN_OFFSET))(this);
	}
};
