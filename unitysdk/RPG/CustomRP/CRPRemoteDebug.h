#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CUSTOMRP_CRPREMOTEDEBUG_ADDDEBUGSERVER_OFFSET UNITYSDK_OFFSET(0x18EBB220)
#define RPG_CUSTOMRP_CRPREMOTEDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBB230)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPRemoteDebug_TypeDefinitionIndex = 35413;

	class CRPRemoteDebug : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPREMOTEDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void AddDebugServer(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPREMOTEDEBUG_ADDDEBUGSERVER_OFFSET))(a1);
		}
	};
}
