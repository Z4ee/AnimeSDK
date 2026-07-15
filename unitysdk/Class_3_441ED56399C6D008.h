#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StartAim; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_3_441ED56399C6D008_METHOD_3_023898CF62937B9F_OFFSET UNITYSDK_OFFSET(0x1557FC20)
#define CLASS_3_441ED56399C6D008_METHOD_3_C0F36E86639809DA_OFFSET UNITYSDK_OFFSET(0x15580010)
#define CLASS_3_441ED56399C6D008_METHOD_3_D7B6B2C5E0FFAB1B_OFFSET UNITYSDK_OFFSET(0x1557FED0)
#define CLASS_3_441ED56399C6D008_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1557F460)
#define CLASS_3_441ED56399C6D008__CTOR_OFFSET UNITYSDK_OFFSET(0x1557F430)

inline static constexpr unsigned int Class_3_441ED56399C6D008_TypeDefinitionIndex = 53372;

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

	::System::Boolean Method_3_D7B6B2C5E0FFAB1B(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_441ED56399C6D008_METHOD_3_D7B6B2C5E0FFAB1B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_023898CF62937B9F(::RPG::GameCore::GameEntity*& a1, ::UnityEngine::Transform*& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*&, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_441ED56399C6D008_METHOD_3_023898CF62937B9F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C0F36E86639809DA(::UnityEngine::Transform*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_441ED56399C6D008_METHOD_3_C0F36E86639809DA_OFFSET))(this, a1, a2);
	}
};
