#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_5AB18F7F8B74B214;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_TACOMPONETPOSITONPASTERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x197535D0)
#define RPG_CLIENT_TACOMPONETPOSITONPASTERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19753620)

namespace RPG::Client
{
	inline static constexpr unsigned int TAComponetPositonPasterMonoPlugin_TypeDefinitionIndex = 67605;

	class TAComponetPositonPasterMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::Class_3_5AB18F7F8B74B214*>
	{
	public:
		::UnityEngine::GameObject* referencePos; // 0x30
		::Il2CppArray<::UnityEngine::GameObject*>* flotageObjects; // 0x38
		::System::Boolean pastPlayerPos; // 0x40
		::UnityEngine::GameObject* posReceiver; // 0x48
		::System::Boolean projectionDebug; // 0x50
		::UnityEngine::GameObject* DebugObj; // 0x58
		::Class_3_5AB18F7F8B74B214* _Behavior; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TACOMPONETPOSITONPASTERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TACOMPONETPOSITONPASTERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
