#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C974D9B5A2874893.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SCENEOBJECTSTATECLIENTSERVER_REQUESTSCENEOBJECTSWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x1DE8CCC0)
#define SCENEOBJECTSTATECLIENTSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8CE30)

inline static constexpr unsigned int SceneObjectStateClientServer_TypeDefinitionIndex = 84785;

class SceneObjectStateClientServer : public ::Class_1_C974D9B5A2874893
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ClientStateCache; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOBJECTSTATECLIENTSERVER__CTOR_OFFSET))(this);
	}

	::System::Void RequestSceneObjectSwitchState(::System::Int32 sceneObjectID, ::System::Int32 state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SCENEOBJECTSTATECLIENTSERVER_REQUESTSCENEOBJECTSWITCHSTATE_OFFSET))(this, sceneObjectID, state);
	}
};
