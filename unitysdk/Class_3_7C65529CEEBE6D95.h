#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCameraLookAt; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraVector3ChangeParam; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_7C65529CEEBE6D95_METHOD_3_5DA7E6E6484000DA_OFFSET UNITYSDK_OFFSET(0x163D65C0)
#define CLASS_3_7C65529CEEBE6D95_METHOD_3_6386D036D69129C5_OFFSET UNITYSDK_OFFSET(0x163D6950)
#define CLASS_3_7C65529CEEBE6D95_METHOD_3_F25E77D6D86538C0_OFFSET UNITYSDK_OFFSET(0x163D6310)
#define CLASS_3_7C65529CEEBE6D95_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163D5400)
#define CLASS_3_7C65529CEEBE6D95__CTOR_OFFSET UNITYSDK_OFFSET(0x163D53B0)

inline static constexpr unsigned int Class_3_7C65529CEEBE6D95_TypeDefinitionIndex = 55041;

class Class_3_7C65529CEEBE6D95 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureCameraLookAt*>
{
public:
	::RPG::GameCore::VCameraVector3ChangeParam* NPIMOBAHJED; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_7C65529CEEBE6D95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C65529CEEBE6D95_ONTASKBEGIN_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* Method_3_F25E77D6D86538C0(::RPG::GameCore::AdventureCameraLookAt* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::RPG::GameCore::AdventureCameraLookAt*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_3_7C65529CEEBE6D95_METHOD_3_F25E77D6D86538C0_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_3_6386D036D69129C5(::RPG::GameCore::AdventureCameraLookAt* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::AdventureCameraLookAt*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_7C65529CEEBE6D95_METHOD_3_6386D036D69129C5_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_5DA7E6E6484000DA(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7C65529CEEBE6D95_METHOD_3_5DA7E6E6484000DA_OFFSET))(this, a1, a2);
	}
};
