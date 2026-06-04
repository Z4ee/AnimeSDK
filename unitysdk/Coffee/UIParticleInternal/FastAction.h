#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIParticleInternal/FastActionBase_1.h"

namespace System { class Action; }

#define COFFEE_UIPARTICLEINTERNAL_FASTACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1467C430)
#define COFFEE_UIPARTICLEINTERNAL_FASTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1467C5D0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int FastAction_TypeDefinitionIndex = 41510;

	class FastAction : public ::Coffee::UIParticleInternal::FastActionBase_1<::System::Action*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_FASTACTION_INVOKE_OFFSET))(this);
		}
	};
}
