#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEffectAutoLayoutScale; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_446346A1CB297E14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169D34E0)
#define CLASS_3_446346A1CB297E14__CTOR_OFFSET UNITYSDK_OFFSET(0x169D34B0)

inline static constexpr unsigned int Class_3_446346A1CB297E14_TypeDefinitionIndex = 52978;

class Class_3_446346A1CB297E14 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEffectAutoLayoutScale*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAutoLayoutScale* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAutoLayoutScale*))((::PBYTE)hIl2Cpp + CLASS_3_446346A1CB297E14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_446346A1CB297E14_ONTASKBEGIN_OFFSET))(this);
	}
};
