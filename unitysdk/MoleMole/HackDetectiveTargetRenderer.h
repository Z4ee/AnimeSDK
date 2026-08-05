#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class ConfigHack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13842D10)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x13842D70)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x13841BA0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_6DF59B0E47A57FAF_OFFSET UNITYSDK_OFFSET(0x13843C40)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_A6B412A42E4C4567_OFFSET UNITYSDK_OFFSET(0x138426B0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13841B50)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_SETEFFECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x13842640)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_TRIGGERINTERACT_OFFSET UNITYSDK_OFFSET(0x138425E0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13841F40)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x13843B20)

namespace MoleMole
{
	inline static constexpr unsigned int HackDetectiveTargetRenderer_TypeDefinitionIndex = 51860;

	class HackDetectiveTargetRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet_Field_5_1()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(HackDetectiveTargetRenderer_TypeDefinitionIndex)->GetStaticField(0x3F910);
		}
		static ::UnityEngine::Material** StaticGet_Field_5_2()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(HackDetectiveTargetRenderer_TypeDefinitionIndex)->GetStaticField(0x3F930);
		}
		// static const ::System::String* Field_5_18; // 0x0
		// static const ::System::Reflection::BindingFlags Field_5_23; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_3; // 0x18
		::UnityEngine::Material* Field_5_0; // 0x20
		::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* Field_5_7; // 0x28
		::System::Boolean Field_5_6; // 0x30
		::System::Single Field_5_5; // 0x34
		::UnityEngine::Color Field_5_4; // 0x38
		::System::Single Field_5_11; // 0x48
		::System::Single Field_5_10; // 0x4C
		::System::Single Field_5_9; // 0x50
		::System::Single Field_5_8; // 0x54
		::System::Boolean Field_5_15; // 0x58
		::System::Boolean Field_5_14; // 0x59
		::System::Boolean Field_5_13; // 0x5A
		::System::Boolean Field_5_12; // 0x5B
		::MoleMole::Config::ConfigHack* Field_5_19; // 0x60
		::System::Int32 Field_5_17; // 0x68
		::System::Int32 Field_5_16; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void TriggerInteract(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_TRIGGERINTERACT_OFFSET))(this, a1);
		}

		::System::Void SetEffectsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_SETEFFECTSVISIBLE_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_INITIALIZE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_5_6DF59B0E47A57FAF(::MoleMole::Config::ConfigHack* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::ConfigHack*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_6DF59B0E47A57FAF_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_5_00DC6C482249EA10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_00DC6C482249EA10_OFFSET))(this);
		}

		::System::Void Method_5_660474B0F8C5FECE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_660474B0F8C5FECE_OFFSET))(this);
		}

		::System::Void Method_5_A6B412A42E4C4567(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_A6B412A42E4C4567_OFFSET))(this, a1);
		}
	};
}
