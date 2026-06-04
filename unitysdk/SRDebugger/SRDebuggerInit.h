#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

#define SRDEBUGGER_SRDEBUGGERINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE7E30)

namespace SRDebugger
{
	inline static constexpr unsigned int SRDebuggerInit_TypeDefinitionIndex = 35622;

	class SRDebuggerInit : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SRDEBUGGERINIT__CTOR_OFFSET))(this);
		}
	};
}
