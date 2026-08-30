#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TOPNODETAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4ACFC0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int TOPNodeTags_TypeDefinitionIndex = 39240;

	class TOPNodeTags : public ::System::Object
	{
	public:
		::System::Boolean _showHEngineData; // 0x10
		::System::Boolean _show; // 0x11
		::System::Boolean _autoload; // 0x12
		::System::Boolean _autoloadHEngineData; // 0x13

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TOPNODETAGS__CTOR_OFFSET))(this);
		}
	};
}
