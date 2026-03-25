#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"

namespace RPG::Client { class NPCPedestrianV2BatchAnimationEvent; }
namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__AWAKE_B__0_OFFSET UNITYSDK_OFFSET(0x9DF1880)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__AWAKE_B__1_OFFSET UNITYSDK_OFFSET(0x9DF1900)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF15B0)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianV2BatchAnimationEvent___c__DisplayClass4_0_TypeDefinitionIndex = 56613;

	class NPCPedestrianV2BatchAnimationEvent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::NPCPedestrianV2BatchAnimationEvent* __4__this; // 0x10
		::System::String* ev; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Awake_b__0(::UnityEngine::Rendering::BatchAnimation* ba, ::UnityEngine::Rendering::BatchAnimEventObjCB& eventobj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__AWAKE_B__0_OFFSET))(this, ba, eventobj);
		}

		::System::Void _Awake_b__1(::UnityEngine::Rendering::BatchAnimation* ba, ::UnityEngine::Rendering::BatchAnimEventObjCB& eventobj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__AWAKE_B__1_OFFSET))(this, ba, eventobj);
		}
	};
}
