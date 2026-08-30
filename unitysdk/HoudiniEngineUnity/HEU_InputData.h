#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42A500)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputData_TypeDefinitionIndex = 39345;

	class HEU_InputData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _inputObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTDATA__CTOR_OFFSET))(this);
		}
	};
}
