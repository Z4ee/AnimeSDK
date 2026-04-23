#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class CreatePropInTargetFront; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A0DDF5B3C669501E_METHOD_3_8183F4804473A43C_OFFSET UNITYSDK_OFFSET(0x1242C3C0)
#define CLASS_3_A0DDF5B3C669501E_METHOD_3_D0B924EC80136D64_OFFSET UNITYSDK_OFFSET(0x1242CAE0)
#define CLASS_3_A0DDF5B3C669501E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1242C370)
#define CLASS_3_A0DDF5B3C669501E__CTOR_OFFSET UNITYSDK_OFFSET(0x1242C340)

inline static constexpr unsigned int Class_3_A0DDF5B3C669501E_TypeDefinitionIndex = 53541;

class Class_3_A0DDF5B3C669501E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreatePropInTargetFront*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePropInTargetFront* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePropInTargetFront*))((::PBYTE)hIl2Cpp + CLASS_3_A0DDF5B3C669501E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0DDF5B3C669501E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8183F4804473A43C(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A0DDF5B3C669501E_METHOD_3_8183F4804473A43C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_D0B924EC80136D64(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_A0DDF5B3C669501E_METHOD_3_D0B924EC80136D64_OFFSET))(this, a1, a2, a3);
	}
};
