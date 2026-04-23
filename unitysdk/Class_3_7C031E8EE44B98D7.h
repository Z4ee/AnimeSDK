#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntitySetExtAnimLayerEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C031E8EE44B98D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124FEC60)
#define CLASS_3_7C031E8EE44B98D7__CTOR_OFFSET UNITYSDK_OFFSET(0x124FEC30)

inline static constexpr unsigned int Class_3_7C031E8EE44B98D7_TypeDefinitionIndex = 48344;

class Class_3_7C031E8EE44B98D7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEntitySetExtAnimLayerEnable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable*))((::PBYTE)hIl2Cpp + CLASS_3_7C031E8EE44B98D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C031E8EE44B98D7_ONTASKBEGIN_OFFSET))(this);
	}
};
