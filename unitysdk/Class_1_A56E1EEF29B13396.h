#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataBind { class AsyncDestroyTrigger; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A56E1EEF29B13396_METHOD_1_0855FF79C8DAEC86_OFFSET UNITYSDK_OFFSET(0x1C9081B0)
#define CLASS_1_A56E1EEF29B13396_METHOD_1_181FFB5F87A4F2D0_OFFSET UNITYSDK_OFFSET(0x1C908210)

inline static constexpr unsigned int Class_1_A56E1EEF29B13396_TypeDefinitionIndex = 34592;

class Class_1_A56E1EEF29B13396 : public ::System::Object
{
public:
	static ::MoleMole::DataBind::AsyncDestroyTrigger* Method_1_0855FF79C8DAEC86(::UnityEngine::Component* a1)
	{
		return ((::MoleMole::DataBind::AsyncDestroyTrigger*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_A56E1EEF29B13396_METHOD_1_0855FF79C8DAEC86_OFFSET))(a1);
	}

	static ::MoleMole::DataBind::AsyncDestroyTrigger* Method_1_181FFB5F87A4F2D0(::UnityEngine::GameObject* a1)
	{
		return ((::MoleMole::DataBind::AsyncDestroyTrigger*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A56E1EEF29B13396_METHOD_1_181FFB5F87A4F2D0_OFFSET))(a1);
	}
};
