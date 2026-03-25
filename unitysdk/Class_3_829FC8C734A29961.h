#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropEnableCollider; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_829FC8C734A29961_METHOD_3_352B38B39578F4BB_OFFSET UNITYSDK_OFFSET(0x89C2F50)
#define CLASS_3_829FC8C734A29961_METHOD_3_9F813FFF1B5848F2_OFFSET UNITYSDK_OFFSET(0x89C32D0)
#define CLASS_3_829FC8C734A29961_METHOD_3_C886532D02F6AF70_OFFSET UNITYSDK_OFFSET(0x89C3050)
#define CLASS_3_829FC8C734A29961_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89C2AA0)
#define CLASS_3_829FC8C734A29961__CTOR_OFFSET UNITYSDK_OFFSET(0x89C2A70)

inline static constexpr unsigned int Class_3_829FC8C734A29961_TypeDefinitionIndex = 47056;

class Class_3_829FC8C734A29961 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropEnableCollider*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropEnableCollider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropEnableCollider*))((::PBYTE)hIl2Cpp + CLASS_3_829FC8C734A29961__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_829FC8C734A29961_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Boolean Method_3_9F813FFF1B5848F2(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_829FC8C734A29961_METHOD_3_9F813FFF1B5848F2_OFFSET))(a1);
	}

	::System::Void Method_3_352B38B39578F4BB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_829FC8C734A29961_METHOD_3_352B38B39578F4BB_OFFSET))(this, a1);
	}

	::System::Void Method_3_C886532D02F6AF70(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_829FC8C734A29961_METHOD_3_C886532D02F6AF70_OFFSET))(this, a1);
	}
};
