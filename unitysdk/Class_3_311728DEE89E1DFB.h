#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class CreatePropInTargetFront; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_311728DEE89E1DFB_METHOD_3_5377492345CEAC85_OFFSET UNITYSDK_OFFSET(0xC02EF00)
#define CLASS_3_311728DEE89E1DFB_METHOD_3_D0B924EC80136D64_OFFSET UNITYSDK_OFFSET(0xC02F6E0)
#define CLASS_3_311728DEE89E1DFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC02EEB0)
#define CLASS_3_311728DEE89E1DFB__CTOR_OFFSET UNITYSDK_OFFSET(0xC02EE80)

inline static constexpr unsigned int Class_3_311728DEE89E1DFB_TypeDefinitionIndex = 58208;

class Class_3_311728DEE89E1DFB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreatePropInTargetFront*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePropInTargetFront* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePropInTargetFront*))((::PBYTE)hIl2Cpp + CLASS_3_311728DEE89E1DFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_311728DEE89E1DFB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5377492345CEAC85(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_311728DEE89E1DFB_METHOD_3_5377492345CEAC85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_D0B924EC80136D64(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_311728DEE89E1DFB_METHOD_3_D0B924EC80136D64_OFFSET))(this, a1, a2, a3);
	}
};
