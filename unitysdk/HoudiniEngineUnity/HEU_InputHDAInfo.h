#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTHDAINFO_COPYTO_OFFSET UNITYSDK_OFFSET(0x845C5A0)
#define HOUDINIENGINEUNITY_HEU_INPUTHDAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x845C5D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputHDAInfo_TypeDefinitionIndex = 37633;

	class HEU_InputHDAInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _pendingGO; // 0x10
		::UnityEngine::GameObject* _connectedGO; // 0x18
		::System::Int32 _connectedInputNodeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTHDAINFO__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::HoudiniEngineUnity::HEU_InputHDAInfo* destInfo)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputHDAInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTHDAINFO_COPYTO_OFFSET))(this, destInfo);
		}
	};
}
