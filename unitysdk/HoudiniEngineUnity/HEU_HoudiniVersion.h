#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIVERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x8C846B0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniVersion_TypeDefinitionIndex = 43617;

	class HEU_HoudiniVersion : public ::System::Object
	{
	public:
		// static const ::System::Int32 HOUDINI_MAJOR = 0x12; // 0x0
		// static const ::System::Int32 HOUDINI_MINOR = 0x5; // 0x0
		// static const ::System::Int32 HOUDINI_BUILD = 0x214; // 0x0
		// static const ::System::Int32 HOUDINI_PATCH = 0x0; // 0x0
		// static const ::System::String* HOUDINI_VERSION_STRING; // 0x0
		// static const ::System::Int32 HOUDINI_ENGINE_MAJOR = 0x3; // 0x0
		// static const ::System::Int32 HOUDINI_ENGINE_MINOR = 0x5; // 0x0
		// static const ::System::Int32 HOUDINI_ENGINE_API = 0x2; // 0x0
		// static const ::System::Int32 UNITY_PLUGIN_VERSION = 0x2; // 0x0
		// static const ::System::String* HAPI_BIN_PATH; // 0x0
		// static const ::System::String* HAPI_LIBRARY; // 0x0
		// static const ::System::String* HARC_LIBRARY; // 0x0
		// static const ::System::String* SIDEFX_SOFTWARE_REGISTRY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIVERSION__CTOR_OFFSET))(this);
		}
	};
}
