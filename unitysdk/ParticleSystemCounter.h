#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define PARTICLESYSTEMCOUNTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18786C20)
#define PARTICLESYSTEMCOUNTER_CLOSECANVAS_OFFSET UNITYSDK_OFFSET(0x18789BC0)
#define PARTICLESYSTEMCOUNTER_COUNTANDDISPLAYPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x187877A0)
#define PARTICLESYSTEMCOUNTER_CREATEEXPORTBUTTON_OFFSET UNITYSDK_OFFSET(0x18787DC0)
#define PARTICLESYSTEMCOUNTER_ENSUREUIINITIALIZED_OFFSET UNITYSDK_OFFSET(0x18787190)
#define PARTICLESYSTEMCOUNTER_EXPORTPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x18789B70)
#define PARTICLESYSTEMCOUNTER_GETGAMEOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x18789730)
#define PARTICLESYSTEMCOUNTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x187868F0)
#define PARTICLESYSTEMCOUNTER_OPENORCLOSEPARTICLESYSTEMCOUNTER_OFFSET UNITYSDK_OFFSET(0x18789980)
#define PARTICLESYSTEMCOUNTER_SAVEPARTICLESYSTEMSTOFILE_OFFSET UNITYSDK_OFFSET(0x18788720)
#define PARTICLESYSTEMCOUNTER_TOGGLECOUNTER_OFFSET UNITYSDK_OFFSET(0x18789B20)
#define PARTICLESYSTEMCOUNTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18786EE0)
#define PARTICLESYSTEMCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18789DB0)

inline static constexpr unsigned int ParticleSystemCounter_TypeDefinitionIndex = 44541;

class ParticleSystemCounter : public ::UnityEngine::MonoBehaviour
{
public:
	static ::ParticleSystemCounter** StaticGet__instance()
	{
		return (::ParticleSystemCounter**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystemCounter_TypeDefinitionIndex)->GetStaticField(0x4DD70);
	}
	// static const ::System::Int32 kUpdateFrameCount = 0x4; // 0x0
	::System::Boolean enableUpdate; // 0x18
	::UnityEngine::UI::Text* counterText; // 0x20
	::UnityEngine::GameObject* canvasObj; // 0x28
	::UnityEngine::UI::Button* exportButton; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* particleSystems; // 0x38
	::System::Int32 frameCounter; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER__CTOR_OFFSET))(this);
	}

	static ::ParticleSystemCounter* get_Instance()
	{
		return ((::ParticleSystemCounter*(*)())((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_GET_INSTANCE_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_UPDATE_OFFSET))(this);
	}

	::System::Int32 CountAndDisplayParticleSystems()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_COUNTANDDISPLAYPARTICLESYSTEMS_OFFSET))(this);
	}

	::System::Void EnsureUIInitialized()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_ENSUREUIINITIALIZED_OFFSET))(this);
	}

	::System::Void CreateExportButton()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_CREATEEXPORTBUTTON_OFFSET))(this);
	}

	::System::Void SaveParticleSystemsToFile()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_SAVEPARTICLESYSTEMSTOFILE_OFFSET))(this);
	}

	::System::String* GetGameObjectPath(::UnityEngine::Transform* trans)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_GETGAMEOBJECTPATH_OFFSET))(this, trans);
	}

	::System::Void OpenOrCloseParticleSystemCounter()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_OPENORCLOSEPARTICLESYSTEMCOUNTER_OFFSET))(this);
	}

	static ::System::Void ToggleCounter()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_TOGGLECOUNTER_OFFSET))();
	}

	static ::System::Void ExportParticleSystems()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_EXPORTPARTICLESYSTEMS_OFFSET))();
	}

	::System::Void CloseCanvas()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESYSTEMCOUNTER_CLOSECANVAS_OFFSET))(this);
	}
};
