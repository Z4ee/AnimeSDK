#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig; }
namespace System { class String; }

#define MOLEMOLE_MONOCURVEMOVEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x142A1DA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCurveMoveObject_TypeDefinitionIndex = 78663;

	class MonoCurveMoveObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 sceneObjectID; // 0x28
		::MoleMole::Battle::CurveMoveComponent_Config* config; // 0x30
		::MoleMole::Battle::CurveMoveComponent_TriggerConfig* triggerConfigV2; // 0x38
		::System::Boolean forceSetMassCenter; // 0x40
		::UnityEngine::Vector3 massCenterValue; // 0x44
		::Il2CppArray<::System::String*>* autoAttachMarkNodes; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCURVEMOVEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
