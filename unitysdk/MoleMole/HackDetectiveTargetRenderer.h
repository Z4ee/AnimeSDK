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

#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12BC3E90)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x12BC3EF0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x12BC2D20)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_6DF59B0E47A57FAF_OFFSET UNITYSDK_OFFSET(0x12BC4DC0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_A6B412A42E4C4567_OFFSET UNITYSDK_OFFSET(0x12BC3830)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12BC2CD0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_SETEFFECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x12BC37C0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_TRIGGERINTERACT_OFFSET UNITYSDK_OFFSET(0x12BC3760)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12BC30C0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC4CA0)

namespace MoleMole
{
	inline static constexpr unsigned int HackDetectiveTargetRenderer_TypeDefinitionIndex = 65016;

	class HackDetectiveTargetRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet_Field_5_1()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(HackDetectiveTargetRenderer_TypeDefinitionIndex)->GetStaticField(0x3ED60);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_Field_5_2()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(HackDetectiveTargetRenderer_TypeDefinitionIndex)->GetStaticField(0x3ED68);
		}
		// static const ::System::String* Field_5_17; // 0x0
		// static const ::System::Reflection::BindingFlags Field_5_20; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_0; // 0x18
		::UnityEngine::Material* Field_5_3; // 0x20
		::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* Field_5_4; // 0x28
		::System::Boolean Field_5_5; // 0x30
		::System::Single Field_5_6; // 0x34
		::UnityEngine::Color Field_5_7; // 0x38
		::System::Single Field_5_8; // 0x48
		::System::Single Field_5_9; // 0x4C
		::System::Single Field_5_10; // 0x50
		::System::Single Field_5_11; // 0x54
		::System::Boolean Field_5_12; // 0x58
		::System::Boolean Field_5_13; // 0x59
		::System::Boolean Field_5_14; // 0x5A
		::System::Boolean Field_5_15; // 0x5B
		::MoleMole::Config::ConfigHack* Field_5_16; // 0x60
		::System::Int32 Field_5_18; // 0x68
		::System::Int32 Field_5_19; // 0x6C

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

		::System::Void Method_5_00DC6C482249EA10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_00DC6C482249EA10_OFFSET))(this);
		}

		static ::System::Boolean Method_5_6DF59B0E47A57FAF(::MoleMole::Config::ConfigHack* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::ConfigHack*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_6DF59B0E47A57FAF_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_5_51AC7912135C5E23()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_51AC7912135C5E23_OFFSET))(this);
		}

		::System::Void Method_5_A6B412A42E4C4567(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_METHOD_5_A6B412A42E4C4567_OFFSET))(this, a1);
		}
	};
}
