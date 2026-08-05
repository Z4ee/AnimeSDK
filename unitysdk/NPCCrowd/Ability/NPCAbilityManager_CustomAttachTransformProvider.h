#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace NPCCrowd::Ability { class NPCAbility; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CUSTOMATTACHTRANSFORMPROVIDER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE933940)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CUSTOMATTACHTRANSFORMPROVIDER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE933A30)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CUSTOMATTACHTRANSFORMPROVIDER_INVOKE_OFFSET UNITYSDK_OFFSET(0xE933330)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CUSTOMATTACHTRANSFORMPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xE933310)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager_CustomAttachTransformProvider_TypeDefinitionIndex = 78962;

	class NPCAbilityManager_CustomAttachTransformProvider : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_CUSTOMATTACHTRANSFORMPROVIDER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Int32 handler, ::System::UInt32 entityId, ::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::FTransformFragment baseTransform, ::NPCCrowd::Ability::FTransformFragment& attachTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_CUSTOMATTACHTRANSFORMPROVIDER_INVOKE_OFFSET))(this, handler, entityId, ability, baseTransform, attachTransform);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 handler, ::System::UInt32 entityId, ::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::FTransformFragment baseTransform, ::NPCCrowd::Ability::FTransformFragment& attachTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::FTransformFragment, ::NPCCrowd::Ability::FTransformFragment&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_CUSTOMATTACHTRANSFORMPROVIDER_BEGININVOKE_OFFSET))(this, handler, entityId, ability, baseTransform, attachTransform, callback, object);
		}

		::System::Boolean EndInvoke(::NPCCrowd::Ability::FTransformFragment& attachTransform, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_CUSTOMATTACHTRANSFORMPROVIDER_ENDINVOKE_OFFSET))(this, attachTransform, result);
		}
	};
}
