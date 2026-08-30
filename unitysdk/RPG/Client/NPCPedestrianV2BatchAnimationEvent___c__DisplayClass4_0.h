#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"

namespace RPG::Client { class NPCPedestrianV2BatchAnimationEvent; }
namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__AWAKE_B__0_OFFSET UNITYSDK_OFFSET(0xD92F9C0)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__AWAKE_B__1_OFFSET UNITYSDK_OFFSET(0xD92FA50)
#define RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD92F710)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianV2BatchAnimationEvent___c__DisplayClass4_0_TypeDefinitionIndex = 69220;

	class NPCPedestrianV2BatchAnimationEvent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::NPCPedestrianV2BatchAnimationEvent* __4__this; // 0x10
		::System::String* ev; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Awake_b__0(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimEventObjCB& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__AWAKE_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _Awake_b__1(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimEventObjCB& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANV2BATCHANIMATIONEVENT___C__DISPLAYCLASS4_0__AWAKE_B__1_OFFSET))(this, a1, a2);
		}
	};
}
