#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIParticleInternal/FastActionBase_1.h"

namespace System { class Action; }

#define COFFEE_UIPARTICLEINTERNAL_FASTACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D195640)
#define COFFEE_UIPARTICLEINTERNAL_FASTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1957E0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int FastAction_TypeDefinitionIndex = 42325;

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
