#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartReShaSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CDD93E49A2B797D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A81230)
#define CLASS_3_CDD93E49A2B797D7__CTOR_OFFSET UNITYSDK_OFFSET(0x17A81200)

inline static constexpr unsigned int Class_3_CDD93E49A2B797D7_TypeDefinitionIndex = 50864;

class Class_3_CDD93E49A2B797D7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartReShaSceneSelection*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartReShaSceneSelection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartReShaSceneSelection*))((::PBYTE)hIl2Cpp + CLASS_3_CDD93E49A2B797D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDD93E49A2B797D7_ONTASKBEGIN_OFFSET))(this);
	}
};
