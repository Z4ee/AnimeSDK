#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_SessionBase.h"

#define HOUDINIENGINEUNITY_HEU_SESSIONHAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x8CB54A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionHAPI_TypeDefinitionIndex = 43647;

	class HEU_SessionHAPI : public ::HoudiniEngineUnity::HEU_SessionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONHAPI__CTOR_OFFSET))(this);
		}
	};
}
