#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_InstancedInput; }
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_OBJECTINSTANCEINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x11A6D620)
#define HOUDINIENGINEUNITY_HEU_OBJECTINSTANCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6D800)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ObjectInstanceInfo_TypeDefinitionIndex = 39116;

	class HEU_ObjectInstanceInfo : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>* _instancedInputs; // 0x18
		::HoudiniEngineUnity::HEU_PartData* _partTarget; // 0x20
		::System::Int32 _instancedObjectNodeID; // 0x28
		::System::String* _instancedObjectPath; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _instances; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTINSTANCEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectInstanceInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ObjectInstanceInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTINSTANCEINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
