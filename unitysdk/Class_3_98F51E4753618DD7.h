#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PhotoGraphAimTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_98F51E4753618DD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BA4450)
#define CLASS_3_98F51E4753618DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA4420)

inline static constexpr unsigned int Class_3_98F51E4753618DD7_TypeDefinitionIndex = 53351;

class Class_3_98F51E4753618DD7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PhotoGraphAimTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimTarget*))((::PBYTE)hIl2Cpp + CLASS_3_98F51E4753618DD7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98F51E4753618DD7_ONTASKBEGIN_OFFSET))(this);
	}
};
