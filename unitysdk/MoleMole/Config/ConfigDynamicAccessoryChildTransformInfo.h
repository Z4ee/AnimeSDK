#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYCHILDTRANSFORMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE968010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessoryChildTransformInfo_TypeDefinitionIndex = 44365;

	class ConfigDynamicAccessoryChildTransformInfo : public ::System::Object
	{
	public:
		::System::String* ParentAttachPoint; // 0x10
		::UnityEngine::Vector3 LocalPosition; // 0x18
		::UnityEngine::Vector3 LocalRotation; // 0x24
		::UnityEngine::Vector3 LocalScale; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYCHILDTRANSFORMINFO__CTOR_OFFSET))(this);
		}
	};
}
