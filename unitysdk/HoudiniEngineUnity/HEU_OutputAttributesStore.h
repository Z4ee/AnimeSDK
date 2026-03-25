#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_OutputAttribute; }
namespace HoudiniEngineUnity { class HEU_OutputAttributeDictionary; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_CLEAR_OFFSET UNITYSDK_OFFSET(0x84711B0)
#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8471140)
#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_SETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8471010)
#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x8471290)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_OutputAttributesStore_TypeDefinitionIndex = 37655;

	class HEU_OutputAttributesStore : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HoudiniEngineUnity::HEU_OutputAttributeDictionary* _attributes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE__CTOR_OFFSET))(this);
		}

		::System::Void SetAttribute(::HoudiniEngineUnity::HEU_OutputAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_OutputAttribute*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_SETATTRIBUTE_OFFSET))(this, attribute);
		}

		::HoudiniEngineUnity::HEU_OutputAttribute* GetAttribute(::System::String* name)
		{
			return ((::HoudiniEngineUnity::HEU_OutputAttribute*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_CLEAR_OFFSET))(this);
		}
	};
}
