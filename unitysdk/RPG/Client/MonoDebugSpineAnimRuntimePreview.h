#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONODEBUGSPINEANIMRUNTIMEPREVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD741180)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDebugSpineAnimRuntimePreview_TypeDefinitionIndex = 69024;

	class MonoDebugSpineAnimRuntimePreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODEBUGSPINEANIMRUNTIMEPREVIEW__CTOR_OFFSET))(this);
		}
	};
}
