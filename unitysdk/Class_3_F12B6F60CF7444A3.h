#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvSetupCustomTaskTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F12B6F60CF7444A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159DECD0)
#define CLASS_3_F12B6F60CF7444A3__CTOR_OFFSET UNITYSDK_OFFSET(0x159DECA0)

inline static constexpr unsigned int Class_3_F12B6F60CF7444A3_TypeDefinitionIndex = 52782;

class Class_3_F12B6F60CF7444A3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSetupCustomTaskTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetupCustomTaskTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetupCustomTaskTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_F12B6F60CF7444A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F12B6F60CF7444A3_ONTASKBEGIN_OFFSET))(this);
	}
};
