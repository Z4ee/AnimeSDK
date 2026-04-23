#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace Coffee::UIParticleInternal { class FastAction; }
namespace System { class Action; }

#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BBD1E0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BC0430)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONLATEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BBEF10)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x12BC05B0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BC06A0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x12BC0830)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BC0BC0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BC0910)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BC0520)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BC0490)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONLATEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x12BC03A0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x12BC0610)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BC01C0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int UIExtraCallbacks_TypeDefinitionIndex = 40699;

	class UIExtraCallbacks : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_AfterCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x1540);
		}
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_LateAfterCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x1548);
		}
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_OnScreenSizeChangedAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x1550);
		}
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_BeforeCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x1558);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_LastScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x1060);
		}
		static ::System::Boolean* StaticGet_s_IsInitializedAfterCanvasRebuild()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x1068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS__CCTOR_OFFSET))();
		}

		static ::System::Void add_onLateAfterCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONLATEAFTERCANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void remove_onLateAfterCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONLATEAFTERCANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void add_onBeforeCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONBEFORECANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void remove_onBeforeCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONBEFORECANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void add_onAfterCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONAFTERCANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void remove_onAfterCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONAFTERCANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void add_onScreenSizeChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONSCREENSIZECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_onScreenSizeChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONSCREENSIZECHANGED_OFFSET))(value);
		}

		static ::System::Void InitializeAfterCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEAFTERCANVASREBUILD_OFFSET))();
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEONLOAD_OFFSET))();
		}

		static ::System::Void OnBeforeCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONBEFORECANVASREBUILD_OFFSET))();
		}

		static ::System::Void OnAfterCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONAFTERCANVASREBUILD_OFFSET))();
		}
	};
}
