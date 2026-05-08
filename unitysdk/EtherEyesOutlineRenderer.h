#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EOutlineRenderType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/OutlineRendererConfig.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Config { class EtherEyesOutlineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define ETHEREYESOUTLINERENDERER_CLEANRENDERERS_OFFSET UNITYSDK_OFFSET(0x1627FB50)
#define ETHEREYESOUTLINERENDERER_CLOSEOUTLINE_OFFSET UNITYSDK_OFFSET(0x1627FAF0)
#define ETHEREYESOUTLINERENDERER_ENTERSELECTED_OFFSET UNITYSDK_OFFSET(0x1627FD30)
#define ETHEREYESOUTLINERENDERER_EXITSELECTED_OFFSET UNITYSDK_OFFSET(0x1627FD70)
#define ETHEREYESOUTLINERENDERER_FETCHCONFIG_OFFSET UNITYSDK_OFFSET(0x1627F770)
#define ETHEREYESOUTLINERENDERER_GETOUTLINERENDERTYPE_OFFSET UNITYSDK_OFFSET(0x16280900)
#define ETHEREYESOUTLINERENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1627E7A0)
#define ETHEREYESOUTLINERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16280830)
#define ETHEREYESOUTLINERENDERER_OPENOUTLINE_OFFSET UNITYSDK_OFFSET(0x1627F920)
#define ETHEREYESOUTLINERENDERER_TESTCLOSEOUTLINE_OFFSET UNITYSDK_OFFSET(0x162807B0)
#define ETHEREYESOUTLINERENDERER_TESTOPENOUTLINE_OFFSET UNITYSDK_OFFSET(0x162804D0)
#define ETHEREYESOUTLINERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1627FDB0)
#define ETHEREYESOUTLINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x16280950)

inline static constexpr unsigned int EtherEyesOutlineRenderer_TypeDefinitionIndex = 59138;

class EtherEyesOutlineRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* configPath; // 0x0
	::MoleMole::Config::EtherEyesOutlineConfig* outlineConfig; // 0x18
	::UnityEngine::Material* material; // 0x20
	::System::Single timer; // 0x28
	::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x30
	::System::Boolean rendererNeedHizCulling; // 0x38
	::System::Boolean enableOutline; // 0x39
	::UnityEngine::AnimationCurve* outlineOpenCurve; // 0x40
	::UnityEngine::AnimationCurve* outlineCloseCurve; // 0x48
	::System::Boolean initialized; // 0x50
	::System::Int32 layerMask; // 0x54
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>* rendererMaterial; // 0x58
	::Class_1_8289F2785D9AA990* fadeTimer; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER__CTOR_OFFSET))(this);
	}

	::System::Void Initialize(::Il2CppArray<::UnityEngine::Renderer*>* allRenderers)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_INITIALIZE_OFFSET))(this, allRenderers);
	}

	::System::Void OpenOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_OPENOUTLINE_OFFSET))(this);
	}

	::System::Void CloseOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_CLOSEOUTLINE_OFFSET))(this);
	}

	::System::Void EnterSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_ENTERSELECTED_OFFSET))(this);
	}

	::System::Void ExitSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_EXITSELECTED_OFFSET))(this);
	}

	::System::Void FetchConfig()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_FETCHCONFIG_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_UPDATE_OFFSET))(this);
	}

	::System::Void CleanRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_CLEANRENDERERS_OFFSET))(this);
	}

	::System::Void TestOpenOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_TESTOPENOUTLINE_OFFSET))(this);
	}

	::System::Void TestCloseOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_TESTCLOSEOUTLINE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_ONDISABLE_OFFSET))(this);
	}

	::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType GetOutlineRenderType()
	{
		return ((::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + ETHEREYESOUTLINERENDERER_GETOUTLINERENDERTYPE_OFFSET))(this);
	}
};
