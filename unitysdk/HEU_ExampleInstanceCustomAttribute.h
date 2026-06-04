#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_OutputAttribute; }
namespace System { class String; }

#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_INSTANCERCALLBACK_OFFSET UNITYSDK_OFFSET(0x17E9D820)
#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_LOGATTR_OFFSET UNITYSDK_OFFSET(0x17E9DDF0)
#define HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9DF50)

inline static constexpr unsigned int HEU_ExampleInstanceCustomAttribute_TypeDefinitionIndex = 37385;

class HEU_ExampleInstanceCustomAttribute : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE__CTOR_OFFSET))(this);
	}

	::System::Void InstancerCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_INSTANCERCALLBACK_OFFSET))(this);
	}

	static ::System::Void LogAttr(::HoudiniEngineUnity::HEU_OutputAttribute* a1)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_OutputAttribute*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEINSTANCECUSTOMATTRIBUTE_LOGATTR_OFFSET))(a1);
	}
};
