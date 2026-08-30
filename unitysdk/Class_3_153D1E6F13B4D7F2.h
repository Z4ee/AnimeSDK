#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RogueTournCollectionLoadedPostProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_153D1E6F13B4D7F2_METHOD_3_F950D0A9C9CC03DC_OFFSET UNITYSDK_OFFSET(0x177DAC90)
#define CLASS_3_153D1E6F13B4D7F2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177DABA0)
#define CLASS_3_153D1E6F13B4D7F2__CTOR_OFFSET UNITYSDK_OFFSET(0x177DAB70)

inline static constexpr unsigned int Class_3_153D1E6F13B4D7F2_TypeDefinitionIndex = 58624;

class Class_3_153D1E6F13B4D7F2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueTournCollectionLoadedPostProcess*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournCollectionLoadedPostProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournCollectionLoadedPostProcess*))((::PBYTE)hIl2Cpp + CLASS_3_153D1E6F13B4D7F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_153D1E6F13B4D7F2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_F950D0A9C9CC03DC(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_153D1E6F13B4D7F2_METHOD_3_F950D0A9C9CC03DC_OFFSET))(this, a1);
	}
};
