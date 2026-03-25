#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_TOPNODETAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x8495F60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int TOPNodeTags_TypeDefinitionIndex = 37748;

	class TOPNodeTags : public ::System::Object
	{
	public:
		::System::Boolean _autoload; // 0x10
		::System::Boolean _show; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TOPNODETAGS__CTOR_OFFSET))(this);
		}
	};
}
