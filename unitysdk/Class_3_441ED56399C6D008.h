#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StartAim; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_3_441ED56399C6D008_METHOD_3_023898CF62937B9F_OFFSET UNITYSDK_OFFSET(0x8D2A270)
#define CLASS_3_441ED56399C6D008_METHOD_3_DA3919336F5678BA_OFFSET UNITYSDK_OFFSET(0x8D2A5F0)
#define CLASS_3_441ED56399C6D008_METHOD_3_DC17EC2736150DD5_OFFSET UNITYSDK_OFFSET(0x8D2A520)
#define CLASS_3_441ED56399C6D008_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D29C20)
#define CLASS_3_441ED56399C6D008__CTOR_OFFSET UNITYSDK_OFFSET(0x8D29BF0)

inline static constexpr unsigned int Class_3_441ED56399C6D008_TypeDefinitionIndex = 44804;

class Class_3_441ED56399C6D008 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartAim*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartAim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartAim*))((::PBYTE)hIl2Cpp + CLASS_3_441ED56399C6D008__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_441ED56399C6D008_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_DC17EC2736150DD5(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_441ED56399C6D008_METHOD_3_DC17EC2736150DD5_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_023898CF62937B9F(::RPG::GameCore::GameEntity*& a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*&, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_441ED56399C6D008_METHOD_3_023898CF62937B9F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_DA3919336F5678BA(::UnityEngine::Transform*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_441ED56399C6D008_METHOD_3_DA3919336F5678BA_OFFSET))(this, a1, a2);
	}
};
