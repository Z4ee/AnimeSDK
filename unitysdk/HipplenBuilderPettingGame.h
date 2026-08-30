#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BabyHipplenController;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define HIPPLENBUILDERPETTINGGAME_METHOD_5_145F41071532775D_OFFSET UNITYSDK_OFFSET(0x18DD1F70)
#define HIPPLENBUILDERPETTINGGAME_METHOD_5_C5B3CC9884471A9E_OFFSET UNITYSDK_OFFSET(0x18DD25D0)
#define HIPPLENBUILDERPETTINGGAME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18DD2A60)
#define HIPPLENBUILDERPETTINGGAME_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x18DD2AC0)
#define HIPPLENBUILDERPETTINGGAME_START_OFFSET UNITYSDK_OFFSET(0x18DD1540)
#define HIPPLENBUILDERPETTINGGAME_UPDATE_OFFSET UNITYSDK_OFFSET(0x18DD1680)
#define HIPPLENBUILDERPETTINGGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD2EE0)

inline static constexpr unsigned int HipplenBuilderPettingGame_TypeDefinitionIndex = 47665;

class HipplenBuilderPettingGame : public ::UnityEngine::MonoBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCamera* mainCamera; // 0x18
	::UnityEngine::GameObject* handModel; // 0x20
	::UnityEngine::SkinnedMeshRenderer* skinnedMeshRenderer; // 0x28
	::BabyHipplenController* babyHipplenController; // 0x30
	::System::Single petSpdMult; // 0x38
	::System::Single petSpdMax; // 0x3C
	::UnityEngine::Mesh* AGOMIHMKJPN; // 0x40
	::UnityEngine::Vector3 JPGFFJJNMFK; // 0x48
	::System::Single petSpd; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERPETTINGGAME__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERPETTINGGAME_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERPETTINGGAME_UPDATE_OFFSET))(this);
	}

	::System::Boolean Method_5_145F41071532775D(::UnityEngine::Ray a1, ::UnityEngine::Mesh* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Mesh*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HIPPLENBUILDERPETTINGGAME_METHOD_5_145F41071532775D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_5_C5B3CC9884471A9E(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + HIPPLENBUILDERPETTINGGAME_METHOD_5_C5B3CC9884471A9E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERPETTINGGAME_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERPETTINGGAME_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
