#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SCENETOOLSET_DESIGNTOOL_MONOOBJECTREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8CEF0)

namespace SceneToolSet::DesignTool
{
	inline static constexpr unsigned int MonoObjectRef_TypeDefinitionIndex = 56094;

	class MonoObjectRef : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENETOOLSET_DESIGNTOOL_MONOOBJECTREF__CTOR_OFFSET))(this);
		}
	};
}
