#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_COPYTO_OFFSET UNITYSDK_OFFSET(0x10868BA0)
#define HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x108843E0)
#define HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10884640)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InstanceInputUIState_TypeDefinitionIndex = 38256;

	class HEU_InstanceInputUIState : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean _showInstanceInputs; // 0x18
		::System::Int32 _numInputsToShowUI; // 0x1C
		::System::Int32 _inputsPageIndexUI; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InstanceInputUIState*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_COPYTO_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_InstanceInputUIState*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
