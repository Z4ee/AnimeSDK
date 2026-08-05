#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_F2DAD7F45F518868;

#define NPCCROWD_MONONPCCROWDENTITYRUNTIMEDEBUGGER_SETNPCENTITY_OFFSET UNITYSDK_OFFSET(0xF887B90)
#define NPCCROWD_MONONPCCROWDENTITYRUNTIMEDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xF887BE0)

namespace NPCCrowd
{
	inline static constexpr unsigned int MonoNPCCrowdEntityRuntimeDebugger_TypeDefinitionIndex = 69898;

	class MonoNPCCrowdEntityRuntimeDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 INVALID_ID = 0x0; // 0x0
		::Class_3_F2DAD7F45F518868* entity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_MONONPCCROWDENTITYRUNTIMEDEBUGGER__CTOR_OFFSET))(this);
		}

		::System::Void SetNPCEntity(::Class_3_F2DAD7F45F518868* crowd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_MONONPCCROWDENTITYRUNTIMEDEBUGGER_SETNPCENTITY_OFFSET))(this, crowd);
		}
	};
}
