#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class Freelook3rdVCamConfigChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2942014A3F55712A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123EB070)
#define CLASS_3_2942014A3F55712A__CTOR_OFFSET UNITYSDK_OFFSET(0x123EB040)

inline static constexpr unsigned int Class_3_2942014A3F55712A_TypeDefinitionIndex = 50774;

class Class_3_2942014A3F55712A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::Freelook3rdVCamConfigChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Freelook3rdVCamConfigChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Freelook3rdVCamConfigChange*))((::PBYTE)hIl2Cpp + CLASS_3_2942014A3F55712A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2942014A3F55712A_ONTASKBEGIN_OFFSET))(this);
	}
};
