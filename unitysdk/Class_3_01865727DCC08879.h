#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAdvEffectBGCurve; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_01865727DCC08879_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1690D350)
#define CLASS_3_01865727DCC08879__CTOR_OFFSET UNITYSDK_OFFSET(0x1690D320)

inline static constexpr unsigned int Class_3_01865727DCC08879_TypeDefinitionIndex = 55542;

class Class_3_01865727DCC08879 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAdvEffectBGCurve*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectBGCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectBGCurve*))((::PBYTE)hIl2Cpp + CLASS_3_01865727DCC08879__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01865727DCC08879_ONTASKBEGIN_OFFSET))(this);
	}
};
